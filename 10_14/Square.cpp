#include <iostream>
#include "Square.h"

using namespace std;

double Square::area() {
  return length * length;
}

int Square::perimeter() {
  return length * 4;
}

void Square::print() {
  Shape::print();
  cout << "\tlength: " << length
       << endl;
}

Square::Square() { //: Shape("SQUARE",
  //		 "hot pink",
  //			 0) {
  length = 0;
 
}

Square::Square(string name, string color,
	       int l) : Shape(name, color, 4) {
  length = l;
}
