#include "Shape.h"
#include <iostream>

using namespace std;

Shape::Shape() {
  name = "DEFAULT SHAPE";
  color = "DEFAULT COLOR";
  sides = 0;
}

Shape::Shape(string n, string c, int s) {
  name = n;
  color = c;
  sides = s;
}

int Shape::perimeter() {
  return -1;
}

double Shape::area() {
  return -1;
}

void Shape::print() {
  cout << "Name: " << name
       << "\n\tColor: " << color
       << "\n\tSides: " << sides
       << endl;
}
