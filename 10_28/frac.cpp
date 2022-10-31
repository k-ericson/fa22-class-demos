#include "frac.h"
#include <iostream>

using namespace std;

Frac Frac::operator*(Frac rhs) {
  int top = num * rhs.num;
  int bot = denom * rhs.denom;
  return Frac(top, bot);
}

bool Frac::operator==(Frac rhs) {
  double l = num / (double)denom;
  double r = rhs.num / (double)rhs.denom;
  return l == r;
}

Frac::Frac() {
  num = 1;
  denom = 1;
}

Frac::Frac(int n, int d) {
  num = n;
  denom = d;
}

ostream& operator<<(ostream& out, Frac& toPrint) {
  out << toPrint.num << " / " << toPrint.denom;
  return out;
}
