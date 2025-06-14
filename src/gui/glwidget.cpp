/**
 * @file glwidget.cpp
 * @author tambrake bradjang darkstre
 * @brief Модуль описания класса GLWidget.
 * @version 1.0
 * @date 2024-09-27
 *
 * @copyright Copyfight (c) 2024
 *
 */

#include "glwidget.h"

GLWidget::GLWidget(QWidget *parent)
    : QOpenGLWidget(parent),
      m_program(nullptr),
      // clr_back(25, 20, 40),
      clr_back(50, 40, 80),
      // clr_vert(255, 255, 0),
      clr_vert(128, 128, 64),
      clr_line(95, 220, 255),
      points(0),
      pointsSize(1),
      dottedLine(1),
      lineSize(1),
      projection(0) {
  setlocale(LC_NUMERIC, "C");
  init_afinne(&mx);
  parse(NULL, &data);
  object = copy_data(&data);
  std::fill(std::begin(sliders), std::end(sliders), 0.0f);
  sliders[6] = 1.0f;
}

/*void drawCircle(float x, float y, float z, float radius, int numSegments) {
    glBegin(GL_TRIANGLE_FAN);
    glVertex3f(x, y, z); // Центр круга
    for (int i = 0; i <= numSegments; ++i) {
        float angle = 2.0f * M_PI * float(i) / float(numSegments);
        float dx = radius * cosf(angle);
        float dy = radius * sinf(angle);
        glVertex3f(x + dx, y + dy, z);
    }
    glEnd();
}*/

GLWidget::~GLWidget() {
  remove_data(&data);
  remove_data(&object);
  destroy_affine(&mx);
  destroyBuffers();
}

void GLWidget::destroyBuffers() {
  makeCurrent();
  if (vao.isCreated()) vao.destroy();

  if (vbo.isCreated()) vbo.destroy();

  if (ebo.isCreated()) ebo.destroy();
}

void GLWidget::initializeGL() {
  initializeOpenGLFunctions();
  const char *sh_vertex =
      "attribute vec4 vertex;\n"
      "uniform mat4 coeffMatrix;\n"
      "void main() {\n"
      "   gl_Position = coeffMatrix * vertex;\n"
      "}\n";
  const char *sh_fragment =
      "uniform vec4 color;\n"
      "void main() {\n"
      "   gl_FragColor = color;\n"
      "}\n";

  glEnable(GL_DEPTH_TEST);

  m_program = new QOpenGLShaderProgram;
  m_program->addShaderFromSourceCode(QOpenGLShader::Vertex, sh_vertex);
  m_program->addShaderFromSourceCode(QOpenGLShader::Fragment, sh_fragment);

  m_program->bindAttributeLocation("vertex", 0);
  m_program->link();
  m_program->bind();
  coeffMatrixLoc = m_program->uniformLocation("coeffMatrix");
  colorLoc = m_program->uniformLocation("color");

  rotateMatrix.setToIdentity();
  moveMatrix.setToIdentity();
  scaleMatrix.setToIdentity();
}

void GLWidget::initBuffers() {
  makeCurrent();

  if (vao.isCreated() == false) {
    vao.create();
    vao.bind();

    if (vbo.isCreated() == false) {
      vbo = QOpenGLBuffer(QOpenGLBuffer::VertexBuffer);
      vbo.create();
      vbo.bind();
      vbo.setUsagePattern(QOpenGLBuffer::DynamicDraw);
      if (data.vertex_count != 0) {
        vbo.allocate(data.vertexes.matrix,
                     data.vertex_count * 3 * sizeof(GLfloat));
        glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 3 * sizeof(GLfloat),
                              nullptr);
        glEnableVertexAttribArray(0);
      }
    }

    if (ebo.isCreated() == false) {
      ebo = QOpenGLBuffer(QOpenGLBuffer::IndexBuffer);
      ebo.create();
      ebo.bind();
      ebo.setUsagePattern(QOpenGLBuffer::StaticDraw);
      if (data.facet_count != 0) {
        ebo.allocate(data.facets, data.full_cnt * sizeof(GLuint));
      }
    }
    vao.release();
  }
}

void GLWidget::resizeGL(int w, int h) { setupProjection(w, h); }

void GLWidget::setupProjection(int w, int h) {
  if (w < 1 || h < 1) {
    w = width();
    h = height();
  }

  transformToIdentity();
  cameraMatrix.setToIdentity();
  projectionMatrix.setToIdentity();

  if (projection == 0) {
    cameraMatrix.translate(0.0f, 0.0f, -3.0f);
    projectionMatrix.perspective(45.0f, GLfloat(w) / h, 0.01f, 100.0f);
  } else {
    float top, bottom, right, left;
    float aspect = (GLfloat)w / h;
    float coeff = 1.3f;

    if (w > h) {
      top = coeff;
      bottom = -coeff;
      right = coeff * aspect;
      left = -right;
    } else {
      right = coeff;
      left = -coeff;
      top = coeff / aspect;
      bottom = -top;
    }
    cameraMatrix.ortho(left, right, bottom, top, -100.0f, 100.0f);
  }
}

void GLWidget::afinneGPU(float *values) {
  transformToIdentity();

  rotateMatrix.rotate(values[0], 1, 0, 0);
  rotateMatrix.rotate(values[1], 0, 1, 0);
  rotateMatrix.rotate(values[2], 0, 0, 1);

  moveMatrix.translate(values[3], 0, 0);
  moveMatrix.translate(0, values[4], 0);
  moveMatrix.translate(0, 0, values[5]);

  scaleMatrix.scale(values[6], values[6], values[6]);
}

void GLWidget::transformToIdentity() {
  rotateMatrix.setToIdentity();
  moveMatrix.setToIdentity();
  scaleMatrix.setToIdentity();
}

void GLWidget::updateBuffer(float *update_to) {
  vbo.bind();
  vbo.write(0, update_to, data.vertex_count * 3 * sizeof(GLfloat));
  vbo.release();
}

void GLWidget::paintGL() {
  glClearColor(clr_back.redF(), clr_back.greenF(), clr_back.blueF(), 1.0f);
  glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

  updateBuffer(data.vertexes.matrix);

  m_program->setUniformValue(coeffMatrixLoc, projectionMatrix * cameraMatrix *
                                                 scaleMatrix * moveMatrix *
                                                 rotateMatrix);

  if (vao.isCreated() && vbo.isCreated() && ebo.isCreated()) {
    vao.bind();

    if (dottedLine != 0) {
      m_program->setUniformValue(
          "color", QVector4D(clr_line.redF(), clr_line.greenF(),
                             clr_line.blueF(), clr_line.alphaF()));
      glLineWidth(lineSize);

      if (dottedLine == 2) {
        glEnable(GL_LINE_STIPPLE);
        glLineStipple(1, 0x00FF);
      } else
        glDisable(GL_LINE_STIPPLE);

      glDrawElements(GL_LINES, data.full_cnt, GL_UNSIGNED_INT, nullptr);
    }
    if (points != 0) {
      m_program->setUniformValue(
          "color", QVector4D(clr_vert.redF(), clr_vert.greenF(),
                             clr_vert.blueF(), clr_vert.alphaF()));
      glPointSize(pointsSize);

      if (points == 2) {
        /*for (int i = 0; i < data.vertex_count; ++i) {
          float x = data.vertexes.matrix[i * 3];
          float y = data.vertexes.matrix[i * 3 + 1];
          float z = data.vertexes.matrix[i * 3 + 2];
          drawCircle(x, y, z, pointsSize / 400.0f, 16);
        }*/
        glEnable(GL_POINT_SMOOTH);
      } else
        glDisable(GL_POINT_SMOOTH);

      glDrawArrays(GL_POINTS, 0, data.vertex_count);
    }
    vao.release();
  }
}

int GLWidget::initModel(QString filepath) {
  std::string str = filepath.toStdString();
  remove_data(&data);
  remove_data(&object);

  int err = parse((char *)str.c_str(), &data);

  if (!err) {
    normalize_vertex(&data);
    object = copy_data(&data);
    destroyBuffers();
    initBuffers();
    update();
  }
  return err;
}

int GLWidget::createImage(QString filePath, QString format) {
  makeCurrent();
  QImage image = grabFramebuffer();
  int err = image.save(filePath, format.toStdString().c_str());
  doneCurrent();

  return err;
}

void GLWidget::mousePressEvent(QMouseEvent *event) { emit mousePress(event); }

void GLWidget::mouseMoveEvent(QMouseEvent *event) { emit mouseMove(event); }

void GLWidget::wheelEvent(QWheelEvent *event) { emit mouseWheel(event); }
