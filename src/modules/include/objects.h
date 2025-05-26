/**
 * @file objects.h
 * @author tambrake bradjang darkstre
 * @brief Заголовочный файл, содержащий объекты данных модели.
 * @version 1.0
 * @date 2024-09-27
 *
 * @copyright Copyfight (c) 2024
 *
 */

#ifndef _OBJECTS_H_
#define _OBJECTS_H_

#include <stdbool.h>

#include "./matrix.h"

/// @brief Содержит все данные 3D-модели.
typedef struct {
  int vertex_count;   ///< Количество вершин модели.
  matrix_t vertexes;  ///< Массив вершин модели.
  int facet_count;    ///< Количество граней модели.
  int *facets;        ///< Массив граней модели.
  int full_cnt;       ///< Facets arrays size.
  float max_position;  ///< Наибольшая координата по модулю.
} data_t;

/// @brief Содержит матрицы преобразования 3D-моделей.
typedef struct {
  float *current;  ///< Эффективная матрица трансформации.
  float *identity;  ///< Идентификационная матрица.
  float *move;      ///< Матрица сдвига.
  float *rotate_x;  ///< Матрица вращения по оси X.
  float *rotate_y;  ///< Матрица вращения по оси Y.
  float *rotate_z;  ///< Матрица вращения по оси Z.
  float *scale;     ///< Матрица масштабирования.
} afinne_t;

#endif  // _OBJECTS_H_
