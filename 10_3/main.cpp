#include "Rectangle.h"
#include <iostream>

using namespace std;

const int SIZE = 4;

int main() {
  Rectangle x(20, 5, "pink", "Bob");
  x.print();

  Rectangle name3[SIZE];

  for (int i = 0; i < SIZE; i++) {
    cout << i << ": ";
    name3[i].print();
  }

  name3[0] = Rectangle(4, 8, "blue",
		       "Chad");

  name3[0].print();

  Rectangle bill(9, 10, "pink", "bill");
  name3[1] = bill;

  name3[1].print();
  
  return 0;
}
