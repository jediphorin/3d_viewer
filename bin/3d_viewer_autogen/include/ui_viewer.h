/********************************************************************************
** Form generated from reading UI file 'viewer.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VIEWER_H
#define UI_VIEWER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "glwidget.h"

QT_BEGIN_NAMESPACE

class Ui_viewer
{
public:
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout;
    QFrame *frame;
    QVBoxLayout *verticalLayout_3;
    QPushButton *load_file;
    QFrame *frame_6;
    QVBoxLayout *verticalLayout_5;
    QLabel *label_2;
    QLabel *label;
    QSpacerItem *verticalSpacer_3;
    QFrame *frame_14;
    QGridLayout *gridLayout_3;
    QLabel *vertex_label;
    QRadioButton *square_points;
    QRadioButton *no_points;
    QRadioButton *circle_points;
    QFrame *frame_10;
    QHBoxLayout *horizontalLayout_7;
    QSpinBox *point_size;
    QPushButton *vertex_color;
    QFrame *frame_9;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_6;
    QFrame *line;
    QLabel *label_10;
    QFrame *frame_2;
    QGridLayout *gridLayout_5;
    QRadioButton *default_line;
    QLabel *lines_label;
    QRadioButton *no_lines;
    QRadioButton *dotted_line;
    QFrame *frame_4;
    QHBoxLayout *horizontalLayout_8;
    QSpinBox *line_size_edit;
    QPushButton *lines_color;
    QSpacerItem *verticalSpacer_2;
    QFrame *frame_7;
    QVBoxLayout *verticalLayout_4;
    QLabel *projection_label;
    QRadioButton *central;
    QRadioButton *parallel;
    QWidget *widget;
    QVBoxLayout *verticalLayout_8;
    QLineEdit *filename;
    GLWidget *GL;
    QHBoxLayout *horizontalLayout_6;
    QFrame *frame_15;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_scale;
    QSlider *Zoom;
    QSpinBox *edit_scale;
    QPushButton *reset_scale;
    QFrame *frame_3;
    QVBoxLayout *verticalLayout_2;
    QWidget *widget_11;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_tr;
    QPushButton *reset_move;
    QFrame *frame_12;
    QGridLayout *gridLayout_2;
    QSlider *X_move;
    QSlider *Y_move;
    QLabel *label_8;
    QSpinBox *edit_ztr;
    QSlider *X_rotate;
    QSlider *Y_rotate;
    QLabel *label_7;
    QSlider *Z_move;
    QSlider *Z_rotate;
    QSpinBox *edit_ytr;
    QLabel *label_9;
    QSpinBox *edit_xtr;
    QSpinBox *edit_xr;
    QSpinBox *edit_yr;
    QSpinBox *edit_zr;
    QWidget *widget_13;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_r;
    QPushButton *reset_rotate;
    QLabel *label_17;
    QFrame *frame_11;
    QVBoxLayout *verticalLayout_7;
    QWidget *widget_14;
    QHBoxLayout *horizontalLayout_10;
    QLabel *label_11;
    QPushButton *back_color;
    QLabel *label_5;
    QFrame *frame_5;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_3;
    QWidget *widget_8;
    QVBoxLayout *verticalLayout;
    QPushButton *save_image;
    QPushButton *save_gif;
    QPushButton *reset;

    void setupUi(QMainWindow *viewer)
    {
        if (viewer->objectName().isEmpty())
            viewer->setObjectName("viewer");
        viewer->resize(1444, 797);
        centralwidget = new QWidget(viewer);
        centralwidget->setObjectName("centralwidget");
        horizontalLayout = new QHBoxLayout(centralwidget);
        horizontalLayout->setObjectName("horizontalLayout");
        frame = new QFrame(centralwidget);
        frame->setObjectName("frame");
        frame->setStyleSheet(QString::fromUtf8("background-color:rgb(75, 75, 75)"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        verticalLayout_3 = new QVBoxLayout(frame);
        verticalLayout_3->setObjectName("verticalLayout_3");
        load_file = new QPushButton(frame);
        load_file->setObjectName("load_file");
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(load_file->sizePolicy().hasHeightForWidth());
        load_file->setSizePolicy(sizePolicy);
        load_file->setMinimumSize(QSize(1, 25));
        load_file->setMaximumSize(QSize(163, 40));
        load_file->setStyleSheet(QString::fromUtf8("background-color:rgb(255, 255, 255)"));

        verticalLayout_3->addWidget(load_file);

        frame_6 = new QFrame(frame);
        frame_6->setObjectName("frame_6");
        frame_6->setStyleSheet(QString::fromUtf8("background-color:rgb(235, 235, 235)"));
        frame_6->setFrameShape(QFrame::StyledPanel);
        frame_6->setFrameShadow(QFrame::Raised);
        verticalLayout_5 = new QVBoxLayout(frame_6);
        verticalLayout_5->setObjectName("verticalLayout_5");
        label_2 = new QLabel(frame_6);
        label_2->setObjectName("label_2");

        verticalLayout_5->addWidget(label_2);

        label = new QLabel(frame_6);
        label->setObjectName("label");

        verticalLayout_5->addWidget(label);


        verticalLayout_3->addWidget(frame_6);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_3);

        frame_14 = new QFrame(frame);
        frame_14->setObjectName("frame_14");
        frame_14->setStyleSheet(QString::fromUtf8("background-color:rgb(235, 235, 235)"));
        frame_14->setFrameShape(QFrame::StyledPanel);
        frame_14->setFrameShadow(QFrame::Raised);
        gridLayout_3 = new QGridLayout(frame_14);
        gridLayout_3->setObjectName("gridLayout_3");
        vertex_label = new QLabel(frame_14);
        vertex_label->setObjectName("vertex_label");
        QFont font;
        font.setFamilies({QString::fromUtf8("Ubuntu")});
        font.setPointSize(11);
        font.setBold(true);
        vertex_label->setFont(font);
        vertex_label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_3->addWidget(vertex_label, 0, 0, 1, 1);

        square_points = new QRadioButton(frame_14);
        square_points->setObjectName("square_points");
        square_points->setLayoutDirection(Qt::RightToLeft);

        gridLayout_3->addWidget(square_points, 3, 0, 1, 1);

        no_points = new QRadioButton(frame_14);
        no_points->setObjectName("no_points");
        no_points->setLayoutDirection(Qt::RightToLeft);

        gridLayout_3->addWidget(no_points, 1, 0, 1, 1);

        circle_points = new QRadioButton(frame_14);
        circle_points->setObjectName("circle_points");
        circle_points->setLayoutDirection(Qt::RightToLeft);

        gridLayout_3->addWidget(circle_points, 2, 0, 1, 1);

        frame_10 = new QFrame(frame_14);
        frame_10->setObjectName("frame_10");
        frame_10->setFrameShape(QFrame::StyledPanel);
        frame_10->setFrameShadow(QFrame::Raised);
        horizontalLayout_7 = new QHBoxLayout(frame_10);
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        point_size = new QSpinBox(frame_10);
        point_size->setObjectName("point_size");
        point_size->setStyleSheet(QString::fromUtf8("background-color:rgb(255, 255, 255)"));

        horizontalLayout_7->addWidget(point_size);

        vertex_color = new QPushButton(frame_10);
        vertex_color->setObjectName("vertex_color");
        vertex_color->setMaximumSize(QSize(44, 16777215));
        vertex_color->setStyleSheet(QString::fromUtf8("background-color:rgb(255, 255, 255)"));

        horizontalLayout_7->addWidget(vertex_color);


        gridLayout_3->addWidget(frame_10, 4, 0, 1, 1);


        verticalLayout_3->addWidget(frame_14);

        frame_9 = new QFrame(frame);
        frame_9->setObjectName("frame_9");
        frame_9->setStyleSheet(QString::fromUtf8("background-color:rgb(235, 235, 235)"));
        frame_9->setFrameShape(QFrame::StyledPanel);
        frame_9->setFrameShadow(QFrame::Raised);
        horizontalLayout_9 = new QHBoxLayout(frame_9);
        horizontalLayout_9->setObjectName("horizontalLayout_9");
        label_6 = new QLabel(frame_9);
        label_6->setObjectName("label_6");
        label_6->setFrameShape(QFrame::NoFrame);
        label_6->setAlignment(Qt::AlignCenter);

        horizontalLayout_9->addWidget(label_6);

        line = new QFrame(frame_9);
        line->setObjectName("line");
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);

        horizontalLayout_9->addWidget(line);

        label_10 = new QLabel(frame_9);
        label_10->setObjectName("label_10");
        label_10->setFrameShape(QFrame::NoFrame);
        label_10->setFrameShadow(QFrame::Plain);
        label_10->setAlignment(Qt::AlignCenter);

        horizontalLayout_9->addWidget(label_10);


        verticalLayout_3->addWidget(frame_9);

        frame_2 = new QFrame(frame);
        frame_2->setObjectName("frame_2");
        frame_2->setStyleSheet(QString::fromUtf8("background-color:rgb(235, 235, 235)"));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        gridLayout_5 = new QGridLayout(frame_2);
        gridLayout_5->setObjectName("gridLayout_5");
        default_line = new QRadioButton(frame_2);
        default_line->setObjectName("default_line");
        default_line->setLayoutDirection(Qt::RightToLeft);

        gridLayout_5->addWidget(default_line, 2, 0, 1, 1);

        lines_label = new QLabel(frame_2);
        lines_label->setObjectName("lines_label");
        QFont font1;
        font1.setBold(true);
        lines_label->setFont(font1);
        lines_label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_5->addWidget(lines_label, 5, 0, 1, 1);

        no_lines = new QRadioButton(frame_2);
        no_lines->setObjectName("no_lines");
        no_lines->setLayoutDirection(Qt::RightToLeft);
        no_lines->setAutoFillBackground(false);

        gridLayout_5->addWidget(no_lines, 1, 0, 1, 1);

        dotted_line = new QRadioButton(frame_2);
        dotted_line->setObjectName("dotted_line");
        dotted_line->setLayoutDirection(Qt::RightToLeft);

        gridLayout_5->addWidget(dotted_line, 3, 0, 1, 1);

        frame_4 = new QFrame(frame_2);
        frame_4->setObjectName("frame_4");
        frame_4->setFrameShape(QFrame::StyledPanel);
        frame_4->setFrameShadow(QFrame::Raised);
        horizontalLayout_8 = new QHBoxLayout(frame_4);
        horizontalLayout_8->setObjectName("horizontalLayout_8");
        line_size_edit = new QSpinBox(frame_4);
        line_size_edit->setObjectName("line_size_edit");
        line_size_edit->setStyleSheet(QString::fromUtf8("background-color:rgb(255, 255, 255)"));

        horizontalLayout_8->addWidget(line_size_edit);

        lines_color = new QPushButton(frame_4);
        lines_color->setObjectName("lines_color");
        lines_color->setMaximumSize(QSize(44, 16777215));
        lines_color->setStyleSheet(QString::fromUtf8("background-color:rgb(255, 255, 255)"));

        horizontalLayout_8->addWidget(lines_color);


        gridLayout_5->addWidget(frame_4, 0, 0, 1, 1);


        verticalLayout_3->addWidget(frame_2);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_2);

        frame_7 = new QFrame(frame);
        frame_7->setObjectName("frame_7");
        frame_7->setStyleSheet(QString::fromUtf8("background-color:rgb(235, 235, 235)"));
        frame_7->setFrameShape(QFrame::StyledPanel);
        frame_7->setFrameShadow(QFrame::Raised);
        verticalLayout_4 = new QVBoxLayout(frame_7);
        verticalLayout_4->setObjectName("verticalLayout_4");
        projection_label = new QLabel(frame_7);
        projection_label->setObjectName("projection_label");
        QFont font2;
        font2.setPointSize(11);
        font2.setBold(true);
        projection_label->setFont(font2);
        projection_label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        verticalLayout_4->addWidget(projection_label);

        central = new QRadioButton(frame_7);
        central->setObjectName("central");
        central->setLayoutDirection(Qt::RightToLeft);

        verticalLayout_4->addWidget(central);

        parallel = new QRadioButton(frame_7);
        parallel->setObjectName("parallel");
        parallel->setLayoutDirection(Qt::RightToLeft);

        verticalLayout_4->addWidget(parallel);


        verticalLayout_3->addWidget(frame_7);


        horizontalLayout->addWidget(frame);

        widget = new QWidget(centralwidget);
        widget->setObjectName("widget");
        verticalLayout_8 = new QVBoxLayout(widget);
        verticalLayout_8->setObjectName("verticalLayout_8");
        filename = new QLineEdit(widget);
        filename->setObjectName("filename");
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(filename->sizePolicy().hasHeightForWidth());
        filename->setSizePolicy(sizePolicy1);
        filename->setMinimumSize(QSize(831, 25));
        filename->setMaximumSize(QSize(1924, 16777215));
        filename->setStyleSheet(QString::fromUtf8("background-color:rgb(235, 235, 235)"));

        verticalLayout_8->addWidget(filename);

        GL = new GLWidget(widget);
        GL->setObjectName("GL");
        sizePolicy.setHeightForWidth(GL->sizePolicy().hasHeightForWidth());
        GL->setSizePolicy(sizePolicy);
        horizontalLayout_6 = new QHBoxLayout(GL);
        horizontalLayout_6->setObjectName("horizontalLayout_6");

        verticalLayout_8->addWidget(GL);

        frame_15 = new QFrame(widget);
        frame_15->setObjectName("frame_15");
        frame_15->setEnabled(true);
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(frame_15->sizePolicy().hasHeightForWidth());
        frame_15->setSizePolicy(sizePolicy2);
        frame_15->setMinimumSize(QSize(350, 25));
        frame_15->setMaximumSize(QSize(450, 45));
        frame_15->setStyleSheet(QString::fromUtf8("background-color:rgb(235, 235, 235)"));
        frame_15->setFrameShape(QFrame::StyledPanel);
        frame_15->setFrameShadow(QFrame::Raised);
        horizontalLayout_2 = new QHBoxLayout(frame_15);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(-1, 9, -1, -1);
        label_scale = new QLabel(frame_15);
        label_scale->setObjectName("label_scale");
        label_scale->setFont(font2);

        horizontalLayout_2->addWidget(label_scale);

        Zoom = new QSlider(frame_15);
        Zoom->setObjectName("Zoom");
        Zoom->setMinimum(-90);
        Zoom->setMaximum(600);
        Zoom->setTracking(true);
        Zoom->setOrientation(Qt::Horizontal);
        Zoom->setInvertedAppearance(false);
        Zoom->setInvertedControls(false);

        horizontalLayout_2->addWidget(Zoom);

        edit_scale = new QSpinBox(frame_15);
        edit_scale->setObjectName("edit_scale");
        edit_scale->setStyleSheet(QString::fromUtf8("background-color:rgb(255, 255, 255)"));
        edit_scale->setMinimum(-93);
        edit_scale->setMaximum(600);

        horizontalLayout_2->addWidget(edit_scale, 0, Qt::AlignBottom);

        reset_scale = new QPushButton(frame_15);
        reset_scale->setObjectName("reset_scale");

        horizontalLayout_2->addWidget(reset_scale, 0, Qt::AlignBottom);


        verticalLayout_8->addWidget(frame_15, 0, Qt::AlignHCenter);


        horizontalLayout->addWidget(widget);

        frame_3 = new QFrame(centralwidget);
        frame_3->setObjectName("frame_3");
        frame_3->setStyleSheet(QString::fromUtf8("background-color:rgb(75, 75, 75)"));
        frame_3->setFrameShape(QFrame::StyledPanel);
        frame_3->setFrameShadow(QFrame::Raised);
        verticalLayout_2 = new QVBoxLayout(frame_3);
        verticalLayout_2->setObjectName("verticalLayout_2");
        widget_11 = new QWidget(frame_3);
        widget_11->setObjectName("widget_11");
        widget_11->setStyleSheet(QString::fromUtf8("background-color:rgb(235, 235, 235)"));
        horizontalLayout_3 = new QHBoxLayout(widget_11);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        label_tr = new QLabel(widget_11);
        label_tr->setObjectName("label_tr");
        label_tr->setFont(font1);
        label_tr->setAlignment(Qt::AlignCenter);

        horizontalLayout_3->addWidget(label_tr);

        reset_move = new QPushButton(widget_11);
        reset_move->setObjectName("reset_move");

        horizontalLayout_3->addWidget(reset_move, 0, Qt::AlignLeft);


        verticalLayout_2->addWidget(widget_11);

        frame_12 = new QFrame(frame_3);
        frame_12->setObjectName("frame_12");
        frame_12->setStyleSheet(QString::fromUtf8("background-color:rgb(235, 235, 235)"));
        frame_12->setFrameShape(QFrame::StyledPanel);
        frame_12->setFrameShadow(QFrame::Raised);
        gridLayout_2 = new QGridLayout(frame_12);
        gridLayout_2->setObjectName("gridLayout_2");
        X_move = new QSlider(frame_12);
        X_move->setObjectName("X_move");
        X_move->setAutoFillBackground(false);
        X_move->setMinimum(-100);
        X_move->setMaximum(100);
        X_move->setOrientation(Qt::Vertical);

        gridLayout_2->addWidget(X_move, 1, 0, 1, 1);

        Y_move = new QSlider(frame_12);
        Y_move->setObjectName("Y_move");
        Y_move->setLayoutDirection(Qt::LeftToRight);
        Y_move->setMinimum(-100);
        Y_move->setMaximum(100);
        Y_move->setOrientation(Qt::Vertical);

        gridLayout_2->addWidget(Y_move, 1, 1, 1, 1, Qt::AlignHCenter);

        label_8 = new QLabel(frame_12);
        label_8->setObjectName("label_8");
        label_8->setLayoutDirection(Qt::LeftToRight);
        label_8->setAutoFillBackground(false);
        label_8->setFrameShape(QFrame::NoFrame);
        label_8->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label_8, 2, 1, 1, 1, Qt::AlignHCenter);

        edit_ztr = new QSpinBox(frame_12);
        edit_ztr->setObjectName("edit_ztr");
        edit_ztr->setStyleSheet(QString::fromUtf8("background-color:rgb(255, 255, 255)"));
        edit_ztr->setMinimum(-100);
        edit_ztr->setMaximum(100);

        gridLayout_2->addWidget(edit_ztr, 0, 2, 1, 1);

        X_rotate = new QSlider(frame_12);
        X_rotate->setObjectName("X_rotate");
        X_rotate->setMinimum(-360);
        X_rotate->setMaximum(360);
        X_rotate->setValue(0);
        X_rotate->setOrientation(Qt::Vertical);

        gridLayout_2->addWidget(X_rotate, 3, 0, 1, 1);

        Y_rotate = new QSlider(frame_12);
        Y_rotate->setObjectName("Y_rotate");
        Y_rotate->setMinimum(-360);
        Y_rotate->setMaximum(360);
        Y_rotate->setOrientation(Qt::Vertical);

        gridLayout_2->addWidget(Y_rotate, 3, 1, 1, 1, Qt::AlignHCenter);

        label_7 = new QLabel(frame_12);
        label_7->setObjectName("label_7");
        label_7->setFrameShape(QFrame::NoFrame);

        gridLayout_2->addWidget(label_7, 2, 0, 1, 1);

        Z_move = new QSlider(frame_12);
        Z_move->setObjectName("Z_move");
        Z_move->setMinimum(-100);
        Z_move->setMaximum(100);
        Z_move->setOrientation(Qt::Vertical);

        gridLayout_2->addWidget(Z_move, 1, 2, 1, 1, Qt::AlignRight);

        Z_rotate = new QSlider(frame_12);
        Z_rotate->setObjectName("Z_rotate");
        Z_rotate->setMinimum(-360);
        Z_rotate->setMaximum(360);
        Z_rotate->setOrientation(Qt::Vertical);

        gridLayout_2->addWidget(Z_rotate, 3, 2, 1, 1, Qt::AlignRight);

        edit_ytr = new QSpinBox(frame_12);
        edit_ytr->setObjectName("edit_ytr");
        edit_ytr->setStyleSheet(QString::fromUtf8("background-color:rgb(255, 255, 255)"));
        edit_ytr->setMinimum(-100);
        edit_ytr->setMaximum(100);

        gridLayout_2->addWidget(edit_ytr, 0, 1, 1, 1);

        label_9 = new QLabel(frame_12);
        label_9->setObjectName("label_9");
        label_9->setFrameShape(QFrame::NoFrame);

        gridLayout_2->addWidget(label_9, 2, 2, 1, 1, Qt::AlignRight);

        edit_xtr = new QSpinBox(frame_12);
        edit_xtr->setObjectName("edit_xtr");
        edit_xtr->setMaximumSize(QSize(16777215, 16777215));
        edit_xtr->setStyleSheet(QString::fromUtf8("background-color:rgb(255, 255, 255)"));
        edit_xtr->setMinimum(-100);
        edit_xtr->setMaximum(100);

        gridLayout_2->addWidget(edit_xtr, 0, 0, 1, 1);

        edit_xr = new QSpinBox(frame_12);
        edit_xr->setObjectName("edit_xr");
        edit_xr->setStyleSheet(QString::fromUtf8("background-color:rgb(255, 255, 255)"));
        edit_xr->setMinimum(-360);
        edit_xr->setMaximum(360);

        gridLayout_2->addWidget(edit_xr, 4, 0, 1, 1);

        edit_yr = new QSpinBox(frame_12);
        edit_yr->setObjectName("edit_yr");
        edit_yr->setStyleSheet(QString::fromUtf8("background-color:rgb(255, 255, 255)"));
        edit_yr->setMinimum(-360);
        edit_yr->setMaximum(360);

        gridLayout_2->addWidget(edit_yr, 4, 1, 1, 1);

        edit_zr = new QSpinBox(frame_12);
        edit_zr->setObjectName("edit_zr");
        edit_zr->setStyleSheet(QString::fromUtf8("background-color:rgb(255, 255, 255)"));
        edit_zr->setMinimum(-360);
        edit_zr->setMaximum(360);

        gridLayout_2->addWidget(edit_zr, 4, 2, 1, 1);


        verticalLayout_2->addWidget(frame_12);

        widget_13 = new QWidget(frame_3);
        widget_13->setObjectName("widget_13");
        widget_13->setStyleSheet(QString::fromUtf8("background-color:rgb(235, 235, 235)"));
        horizontalLayout_4 = new QHBoxLayout(widget_13);
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        label_r = new QLabel(widget_13);
        label_r->setObjectName("label_r");
        label_r->setFont(font2);
        label_r->setAlignment(Qt::AlignCenter);

        horizontalLayout_4->addWidget(label_r);

        reset_rotate = new QPushButton(widget_13);
        reset_rotate->setObjectName("reset_rotate");
        reset_rotate->setStyleSheet(QString::fromUtf8(""));

        horizontalLayout_4->addWidget(reset_rotate, 0, Qt::AlignLeft);


        verticalLayout_2->addWidget(widget_13);

        label_17 = new QLabel(frame_3);
        label_17->setObjectName("label_17");

        verticalLayout_2->addWidget(label_17);

        frame_11 = new QFrame(frame_3);
        frame_11->setObjectName("frame_11");
        frame_11->setStyleSheet(QString::fromUtf8("background-color:rgb(235, 235, 235)"));
        frame_11->setFrameShape(QFrame::StyledPanel);
        frame_11->setFrameShadow(QFrame::Raised);
        verticalLayout_7 = new QVBoxLayout(frame_11);
        verticalLayout_7->setObjectName("verticalLayout_7");
        widget_14 = new QWidget(frame_11);
        widget_14->setObjectName("widget_14");
        horizontalLayout_10 = new QHBoxLayout(widget_14);
        horizontalLayout_10->setObjectName("horizontalLayout_10");
        label_11 = new QLabel(widget_14);
        label_11->setObjectName("label_11");

        horizontalLayout_10->addWidget(label_11);

        back_color = new QPushButton(widget_14);
        back_color->setObjectName("back_color");

        horizontalLayout_10->addWidget(back_color);


        verticalLayout_7->addWidget(widget_14);

        label_5 = new QLabel(frame_11);
        label_5->setObjectName("label_5");
        label_5->setFont(font1);
        label_5->setAlignment(Qt::AlignCenter);

        verticalLayout_7->addWidget(label_5);


        verticalLayout_2->addWidget(frame_11);

        frame_5 = new QFrame(frame_3);
        frame_5->setObjectName("frame_5");
        frame_5->setStyleSheet(QString::fromUtf8("background-color:rgb(235, 235, 235)"));
        frame_5->setFrameShape(QFrame::StyledPanel);
        frame_5->setFrameShadow(QFrame::Raised);
        horizontalLayout_5 = new QHBoxLayout(frame_5);
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        label_3 = new QLabel(frame_5);
        label_3->setObjectName("label_3");
        label_3->setFont(font1);
        label_3->setAlignment(Qt::AlignCenter);

        horizontalLayout_5->addWidget(label_3);

        widget_8 = new QWidget(frame_5);
        widget_8->setObjectName("widget_8");
        widget_8->setLayoutDirection(Qt::LeftToRight);
        verticalLayout = new QVBoxLayout(widget_8);
        verticalLayout->setObjectName("verticalLayout");
        save_image = new QPushButton(widget_8);
        save_image->setObjectName("save_image");
        save_image->setLayoutDirection(Qt::LeftToRight);
        save_image->setStyleSheet(QString::fromUtf8("background-color:rgb(255, 255, 255)"));

        verticalLayout->addWidget(save_image);

        save_gif = new QPushButton(widget_8);
        save_gif->setObjectName("save_gif");
        save_gif->setStyleSheet(QString::fromUtf8("background-color:rgb(255, 255, 255)"));

        verticalLayout->addWidget(save_gif);


        horizontalLayout_5->addWidget(widget_8);


        verticalLayout_2->addWidget(frame_5);

        reset = new QPushButton(frame_3);
        reset->setObjectName("reset");
        reset->setStyleSheet(QString::fromUtf8("background-color:rgb(235, 235, 235)"));

        verticalLayout_2->addWidget(reset);


        horizontalLayout->addWidget(frame_3);

        viewer->setCentralWidget(centralwidget);

        retranslateUi(viewer);

        QMetaObject::connectSlotsByName(viewer);
    } // setupUi

    void retranslateUi(QMainWindow *viewer)
    {
        viewer->setWindowTitle(QCoreApplication::translate("viewer", "viewer", nullptr));
        load_file->setText(QCoreApplication::translate("viewer", "Open file", nullptr));
        label_2->setText(QCoreApplication::translate("viewer", "      Facets:", nullptr));
        label->setText(QCoreApplication::translate("viewer", "Vertecies:", nullptr));
        vertex_label->setText(QCoreApplication::translate("viewer", "VERTECIES", nullptr));
        square_points->setText(QCoreApplication::translate("viewer", "square", nullptr));
        no_points->setText(QCoreApplication::translate("viewer", "off", nullptr));
        circle_points->setText(QCoreApplication::translate("viewer", "circle", nullptr));
        vertex_color->setText(QString());
        label_6->setText(QCoreApplication::translate("viewer", "S\n"
"I\n"
"Z\n"
"E\n"
"S", nullptr));
        label_10->setText(QCoreApplication::translate("viewer", "C\n"
"O\n"
"L\n"
"O\n"
"R\n"
"S", nullptr));
        default_line->setText(QCoreApplication::translate("viewer", "solid", nullptr));
        lines_label->setText(QCoreApplication::translate("viewer", "LINES", nullptr));
        no_lines->setText(QCoreApplication::translate("viewer", "off", nullptr));
        dotted_line->setText(QCoreApplication::translate("viewer", "dotted", nullptr));
        lines_color->setText(QString());
        projection_label->setText(QCoreApplication::translate("viewer", "PROJECTION\n"
"TYPE", nullptr));
        central->setText(QCoreApplication::translate("viewer", "Central", nullptr));
        parallel->setText(QCoreApplication::translate("viewer", "Parallel", nullptr));
        label_scale->setText(QCoreApplication::translate("viewer", "SCALE", nullptr));
        reset_scale->setText(QCoreApplication::translate("viewer", "reset", nullptr));
        label_tr->setText(QCoreApplication::translate("viewer", "MOVE", nullptr));
        reset_move->setText(QCoreApplication::translate("viewer", "reset", nullptr));
        label_8->setText(QCoreApplication::translate("viewer", "Y", nullptr));
        label_7->setText(QCoreApplication::translate("viewer", "X", nullptr));
        label_9->setText(QCoreApplication::translate("viewer", "Z", nullptr));
        label_r->setText(QCoreApplication::translate("viewer", "ROTATE", nullptr));
        reset_rotate->setText(QCoreApplication::translate("viewer", "reset", nullptr));
        label_17->setText(QString());
        label_11->setText(QCoreApplication::translate("viewer", "Set color", nullptr));
        back_color->setText(QString());
        label_5->setText(QCoreApplication::translate("viewer", "BACKGROUND", nullptr));
        label_3->setText(QCoreApplication::translate("viewer", "SAVE", nullptr));
        save_image->setText(QCoreApplication::translate("viewer", "Image", nullptr));
        save_gif->setText(QCoreApplication::translate("viewer", "Gif", nullptr));
        reset->setText(QCoreApplication::translate("viewer", "Default", nullptr));
    } // retranslateUi

};

namespace Ui {
    class viewer: public Ui_viewer {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VIEWER_H
