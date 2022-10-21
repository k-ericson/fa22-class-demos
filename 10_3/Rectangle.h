#ifndef RECTANGLE_H
#define RECTANGLE_H
#include <string>

/**
 * a simple rectangle
 *
 * @class Rectangle Rectangle.h "10_3/Rectangle.h"
 * @brief rectangle
 *
 */
class Rectangle {
 private:
  int length;
  int width;
  std::string color;
  std::string name;
 public:
  int area();
  int perimeter();
  void print();
  Rectangle();
  Rectangle(int length, int width, std::string color, std::string name);
};
#endif //RECTANGLE_H
