#include "Shape.h"
#include <iostream>
#include "Square.h"

using namespace std;

void testHelper(Shape &s);

int main() {
  Shape s1;
  Shape s2("Circle-Triangle", "blue", 27);
  testHelper(s1);
  testHelper(s2);

  Square sq;
  Square sqw("para-square", "blue", 2);
  
  testHelper(sq);
  testHelper(sqw);
  
  return 0;
}

void testHelper(Shape &s) {
  cout << "s: " << endl;
  s.print();
  cout << "s.area(): " << s.area() << endl;
  cout << "s.perimeter(): " << s.perimeter() << endl;
  cout << endl << endl;
}
  
