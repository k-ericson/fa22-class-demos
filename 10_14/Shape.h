#ifndef SHAPE_H
#define SHAPE_H
#include <string>

class Shape {
 private:
  std::string name;
  std::string color;
  int sides;
 public:
  virtual int perimeter();
  virtual double area();
  virtual void print();
  Shape();
  Shape(std::string n, std::string c, int s);
};
#endif //SHAPE_H
