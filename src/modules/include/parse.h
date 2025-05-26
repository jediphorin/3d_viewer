/**
 * @file parse.h
 * @author tambrake bradjang darkstre
 * @brief Заголовочный файл модуля парсинга моделей.
 * @version 1.0
 * @date 2024-09-27
 *
 * @copyright Copyfight (c) 2024
 *
 */

#ifndef _PARSE_H_
#define _PARSE_H_

#include <ctype.h>

#include "./objects.h"

/// @brief 1 градус в радианах.
#define RAD 0.0174532925199433

int parse(char *filename, data_t *data);
data_t copy_data(data_t *object);
void remove_data(data_t *data);

#endif  // _PARSE_H_
