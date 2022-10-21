#ifndef SQUARE_H
#define SQUARE_H
#include "Shape.h"

class Square : public Shape {
 private:
  int length;
 public:
  void print();
  int perimeter();
  double area();
  Square();
  Square(std::string name, std::string color, int l);
};

#endif //SQUARE_H
