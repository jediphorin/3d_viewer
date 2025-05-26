/**
 * @file matrix.c
 * @author tambrake bradjang darkstre
 * @brief Модуль работы с матрицами.
 * @version 1.0
 * @date 2024-09-27
 *
 * @copyright Copyfight (c) 2024
 *
 */

// УДАЛИТЬ

#include "./include/matrix.h"

/**
 * @brief Создание матрицы.
 *
 * @param[in] rows - количество рядов.
 * @param[in] cols - количество столбцов.
 * @return matrix_t create - созданная матрица.
 */
matrix_t mx_create(int rows, int cols) {
  matrix_t create;

  create.rows = rows;
  create.cols = cols;
  create.matrix = (float *)calloc(rows * cols, sizeof(float));

  return create;
}

/**
 * @brief Очищение памяти, выделенной для матрицы.
 *
 * @param[in] mx - структура данных матрицы для освобождения памяти.
 */
void mx_remove(matrix_t *mx) {
  if (mx->matrix) {
    free(mx->matrix);
    mx->matrix = NULL;
  }

  mx->rows = 0;
  mx->cols = 0;
}

/**
 * @brief Умножает матрицу 4x4 на вектор-столбец 4x1.
 *
 * @param[in] data - вершины, подлежащие аффинным преобразованиям.
 * @param[in] vertexes - начальные значения координат вершин.
 * @param[in] vector -  матрица трансформации.
 * @param[in] rows - число вершин.
 */
void mx_mult_vector(float *data, float *vertexes, float *vector, int rows) {
  for (int k = 0; k < rows; k++, vertexes += V_CNT, data += V_CNT) {
    float *vr = vector;

    for (int i = 0; i < V_CNT; i++, vr += TR_MX_SIZE) {
      data[i] = vr[0] * vertexes[0] + vr[1] * vertexes[1] +
                vr[2] * vertexes[2] + vr[3];
    }
  }
}

/**
 * @brief Умножает матрицу 4x4 на матрицу 4x4.
 *
 * @param[in] current - эффективная матрица преобразования.
 * @param[in] mul - матрица аффинного преобразования.
 */
void mx_mult_4x4(float *current, float *mul) {
  // void mx_mult_4x4(float *current, const float *mul) {
  float tmp[TR_MX_SIZE * TR_MX_SIZE];
  float sum;

  for (int i = 0; i < TR_MX_SIZE; i++) {
    for (int j = 0; j < TR_MX_SIZE; j++) {
      sum = 0;

      for (int k = 0; k < TR_MX_SIZE; k++)
        sum += current[i * TR_MX_SIZE + k] * mul[k * TR_MX_SIZE + j];

      tmp[i * TR_MX_SIZE + j] = sum;
    }
  }
  mx_copy(current, tmp);
}

/**
 * @brief Копирует значения одной матрицы 4x4 в другую.
 *
 * @param[in] copy - куда копировать.
 * @param[in] data - откуда копировать.
 */
void mx_copy(float *copy, float *data) {
  // void mx_copy(float *copy, const float *data) {
  memcpy(copy, data, TR_MX_SIZE * TR_MX_SIZE * sizeof(float));
}
