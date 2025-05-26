/**
 * @file parse.c
 * @author tambrake bradjang darkstre
 * @brief Распатронивающий модель модуль.
 * @version 1.0
 * @date 2024-09-27
 *
 * @copyright Copyfight (c) 2024
 *
 */

// УДАЛИТЬ

#define _GNU_SOURCE

#include "./include/parse.h"

static int init_data(data_t *data, FILE *obj);
static int get_data(data_t *data, FILE *obj);
static int vert_quantity_of_facet(char *line);

/**
 * @brief Парсит модель. Если имя файла NULL, структура просто
 * инициализируется. Если имя файла допустимо - модель парсится.
 *
 * @param[in] filename путь до obj-файла.
 * @param[in] data - данные модели.
 * @retval false - верный парсинг.
 * @retval true - неверный парсинг.
 */
int parse(char *filename, data_t *data) {
  // int parse(const char *filename, data_t *data) {
  FILE *obj = NULL;
  int err = false;

  if (filename) {
    obj = fopen(filename, "r");
    if (!obj) err = true;
  }

  if (!err) err = init_data(data, obj);

  if (obj && !err) {
    err = get_data(data, obj);
    if (!data->vertex_count) err = true;
  }

  if (obj) fclose(obj);

  return err;
}

/**
 * @brief Инициализация модели. Если obj-файл NULL, структура просто
 * инициализируется. Если obj-файл действительный - выделяется память.
 *
 * @param[in] data - модели данных.
 * @param[in] obj - obj-файл с моделью.
 * @retval false - корректное выделение памяти.
 * @retval true - провальное выделение памяти.
 */
static int init_data(data_t *data, FILE *obj) {
  int err = false;
  data->vertex_count = 0;
  data->facet_count = 0;
  data->full_cnt = 0;
  data->max_position = 0.0f;

  if (obj != NULL) {
    char *line = NULL;
    size_t n = 0;
    ssize_t len;

    while ((len = getline(&line, &n, obj)) != -1) {
      char *line_ptr = line;
      while (*line_ptr == ' ') line_ptr++;

      if (*line_ptr == 'v' && *(line_ptr + 1) == ' ') {
        data->vertex_count++;
      } else if (*line_ptr == 'f' && *(line_ptr + 1) == ' ') {
        data->full_cnt += vert_quantity_of_facet(line_ptr + 2);
        data->facet_count++;
      }
    }

    data->full_cnt *= 2;
    data->vertexes = mx_create(data->vertex_count, V_CNT);
    data->facets = (int *)calloc(data->full_cnt, sizeof(int));

    if (!data->facets || !data->vertexes.matrix) err = true;

    if (line) {
      free(line);
      line = NULL;
    }
    rewind(obj);
  } else {
    data->facets = NULL;
    data->vertexes.matrix = NULL;
    data->vertexes.rows = 0;
    data->vertexes.cols = 0;
  }
  return err;
}

/**
 * @brief Очистка данных модели.
 *
 * @param[in] data - данные модели.
 */
void remove_data(data_t *data) {
  mx_remove(&data->vertexes);

  if (data->facets) {
    free(data->facets);
    data->facets = NULL;
  }
  data->vertex_count = 0;
  data->facet_count = 0;
  data->full_cnt = 0;
  data->max_position = 0.0f;
}

/**
 * @brief Заполнение структуры данных данными о 3D-модели.
 *
 * @param[in] data - структура данных модели.
 * @param[in] obj - obj-файл с моделью.
 * @retval false - успешный парсинг.
 * @retval true - неуспешный парсинг.
 */
static int get_data(data_t *data, FILE *obj) {
  int err = false;
  char *token = NULL, *line = NULL;
  size_t n = 0;
  ssize_t len;
  float *v_ptr = data->vertexes.matrix;
  int *f_ptr = data->facets;

  while ((len = getline(&line, &n, obj)) != -1) {
    char *line_ptr = line;
    while (*line_ptr == ' ') line_ptr++;

    if (*line_ptr == 'v' && *(line_ptr + 1) == ' ') {
      for (int j = 0; j < V_CNT; j++, v_ptr++) {
        token = strtok((token) ? NULL : (line_ptr + 1), " ");

        if (token && (*token != '\n' && !strpbrk(token, "0123456789")))
          err = true;
        else if (token)
          *v_ptr = atof(token);

        if (data->max_position < fabsf(*v_ptr))
          data->max_position = fabs(*v_ptr);
      }
      token = NULL;
    } else if (*line_ptr == 'f' && *(line_ptr + 1) == ' ') {
      int *begin = f_ptr;
      token = strtok(line_ptr + 1, " ");
      for (int vertex; token && !err; f_ptr++) {
        vertex = atoi(token);

        if (!vertex)
          err = true;
        else if (f_ptr == begin)
          *f_ptr = vertex - 1;
        else {
          *f_ptr++ = vertex - 1;
          *f_ptr = *(f_ptr - 1);
        }
        token = strtok(NULL, " ");
        if (token && !strpbrk(token, "0123456789")) token = NULL;
      }
      *f_ptr++ = *begin;
      token = NULL;
    }
  }

  if (line) {
    free(line);
    line = NULL;
  }
  return err;
}

/**
 * @brief Определяет количество вершин в одной грани.
 *
 * @param[in] line - строка с вершинами одной грани.
 * @return int - количество вершин.
 */
static int vert_quantity_of_facet(char *line) {
  char *token = NULL;
  int count = 0;

  char str[strlen(line) + 1];
  sprintf(str, "%s", line);

  for (int i = strlen(str) - 1; i >= 0 && isdigit(str[i]) == 0; i--)
    str[i] = '\0';

  while ((token = strtok((token) ? NULL : str, " ")) != NULL) count++;

  return count;
}

/**
 * @brief Создает копию данных вершин 3D-модели.
 *
 * @param[in] object - данные 3D-модели.
 * @return data_t - копия модели.
 */
data_t copy_data(data_t *object) {
  // data_t copy_data(const data_t *object) {
  data_t data;

  data.vertex_count = object->vertex_count;
  data.facet_count = object->facet_count;
  data.full_cnt = object->full_cnt;
  data.max_position = object->max_position;
  data.facets = NULL;
  data.vertexes = mx_create(data.vertex_count, V_CNT);

  memcpy(data.vertexes.matrix, object->vertexes.matrix,
         data.vertex_count * V_CNT * sizeof(float));

  return data;
}
