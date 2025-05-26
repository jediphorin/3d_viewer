/**
 * @file main.cpp
 * @author tambrake bradjang darkstre
 * @brief Точка запуска.
 * @version 1.0
 * @date 2024-09-27
 *
 * @copyright Copyfight (c) 2024
 *
 */

#include <QApplication>

#include "viewer.h"

int main(int argc, char *argv[]) {
  QApplication a(argc, argv);
  viewer w;
  w.show();

  return a.exec();
}
