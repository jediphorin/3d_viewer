/**
 * @file matrix.h
 * @author tambrake bradjang darkstre
 * @brief Заголовочный файл модуля работы с матрицами.
 * @version 1.0
 * @date 2024-09-27
 *
 * @copyright Copyfight (c) 2024
 *
 */

#ifndef _MATRIX_H_
#define _MATRIX_H_

#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/// @brief Число координат вершины.
#define V_CNT 3

/// @brief Размерность матрицы преобразования.
#define TR_MX_SIZE 4

/// @brief Структура матрицы.
typedef struct {
  float *matrix;  ///< Массив матриц.
  int rows;       ///< Количество рядов.
  int cols;       ///< Количество столбцов.
} matrix_t;

matrix_t mx_create(int rows, int cols);
void mx_remove(matrix_t *mx);
void mx_copy(float *copy, float *data);
void mx_mult_vector(float *data, float *vertexes, float *vector, int rows);
void mx_mult_4x4(float *current, float *mul);

#endif  //_MATRIX_H_
