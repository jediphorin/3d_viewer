/**
 * @file afine.h
 * @author tambrake bradjang darkstre
 * @brief Заголовочный файл модуля для работы с матрицей преобразования.
 * @version 1.0
 * @date 2024-09-27
 *
 * @copyright Copyfight (c) 2024
 *
 */

#ifndef _AFINE_H_
#define _AFINE_H_

#include "./objects.h"

/// @brief Побитовое умножение результирующей матрицы на матрицу масштаба.
#define SCALE 1u

/// @brief Побитовое умножение результирующей матрицы на матрицу сдвига.
#define MOVE 1u << 1

/// @brief Побитовое умножение результирующей матрицы на матрицу поворота оси X.
#define ROTATE_X 1u << 2

/// @brief Побитовое умножение результирующей матрицы на матрицу поворота оси Y.
#define ROTATE_Y 1u << 3

/// @brief Побитовое умножение результирующей матрицы на матрицу поворота по оси
/// Z.
#define ROTATE_Z 1u << 4

int init_afinne(afinne_t *mx);
void destroy_affine(afinne_t *mx);
void normalize_vertex(data_t *data);
void transform_mx(afinne_t *mx, unsigned int data);

#endif  //_AFINE_H_
