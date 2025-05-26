/**
 * @file tests.c
 * @author tambrake bradjang darkstre
 * @brief Главный тестировочный модуль.
 * @version 1.0
 * @date 2024-09-27
 *
 * @copyright Copyfight (c) 2024
 *
 */

#include "./main_test.h"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

static void final_word(int success_count, int fail_count);
static int test_suite(Suite *test, int *success_count);
static void print_function(char *function);
static void test_function(Suite *(**array)(void), size_t size, char *name,
                          int *success_count, int *fail_count);

/**
 * @brief Функция, стартующая тестовые модули.
 *
 * @return int - код ошибки.
 * @retval EXIT_SUCCESS = 0 - если тесты прошли успешно.
 * @retval EXIT_FAILURE = 1 - если тесты провалились.
 */
int main(void) {
  int fail_count = 0;
  int success_count = 0;

#ifdef PARSE_MODE
  Suite *(*parse[])(void) = {
      parse_test,
  };
  test_function(parse, sizeof(parse) / sizeof(parse[0]), "PARSE",
                &success_count, &fail_count);
#endif

#ifdef MATRIX_MODE
  Suite *(*matrix[])(void) = {
      matrix_test,
  };
  test_function(matrix, sizeof(matrix) / sizeof(matrix[0]), "MATRIX",
                &success_count, &fail_count);
#endif

#ifdef AFINE_MODE
  Suite *(*afine[])(void) = {
      afine_test,
  };
  test_function(afine, sizeof(afine) / sizeof(afine[0]), "AFINE",
                &success_count, &fail_count);
#endif

  final_word(success_count, fail_count);

  return (fail_count) ? EXIT_FAILURE : EXIT_SUCCESS;
}

/**
 * @brief Печать результатов теста.
 *
 * @param[in] success_count - число пройденных тестов.
 * @param[in] fail_count - число проваленных тестов.
 */
static void final_word(int success_count, int fail_count) {
  printf("\n\nFINAL RESULT:\nSUCCESS %d tests from %d.\n", success_count,
         success_count + fail_count);
}

/**
 * @brief Выводит сообщение об объявлении функции.
 *
 * @param[in] function - название функции тестирования.
 */
static void print_function(char *function) { printf("\n%s TESTS\n", function); }

/**
 * @brief Функция для тестирования заданного набора.
 *
 * @param[in] test - входящий тестовый набор.
 * @param[in] success_count - счётчик успешных тестов.
 *
 * @return int - количество провалившизся тестов.
 */
static int test_suite(Suite *test, int *success_count) {
  SRunner *suite_runner = srunner_create(test);

  srunner_run_all(suite_runner, CK_NORMAL);
  int fail_count = srunner_ntests_failed(suite_runner);
  *success_count += srunner_ntests_run(suite_runner) - fail_count;
  srunner_free(suite_runner);

  return fail_count;
}

/**
 * @brief Сборник всех функций для тестировании за раз.
 *
 * @param array - массив тестируемых функций.
 * @param size - размер массива.
 * @param name - имя тестируемой функции.
 * @param success_count - количество пройденных тестов.
 * @param fail_count - количество неудачных тестов.
 */
static void test_function(Suite *(**array)(void), size_t size, char *name,
                          int *success_count, int *fail_count) {
  print_function(name);
  for (size_t i = 0; i < size; i++) {
    *fail_count += test_suite(array[i](), success_count);
  }
}
