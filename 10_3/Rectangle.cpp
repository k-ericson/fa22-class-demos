#include "Rectangle.h"
#include <iostream>

using namespace std;

Rectangle::Rectangle(int length, int width,
		     string color,
		     string n) {
  this->length = length;
  this->width = width;
  this->color = color;
  name = n;
}

void Rectangle::print() {
  cout << "Length: " << length
       << "\nWidth: " << width
       << "\nColor: " << color
       << "\nName: " << name << endl;
}

Rectangle::Rectangle() {
  length = 2;
  width = 4;
  color = "orange";
  name = "Circle Jeremy";
}
