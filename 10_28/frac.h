#ifndef FRAC_H
#define FRAC_H

class Frac{
 private:
  int num, denom;
 public:
  Frac operator*(Frac rhs);
  bool operator==(Frac rhs);
  Frac();
  Frac(int n, int d);
  friend ostream& operator<<(ostream &out, Frac& toPrint);
    
};
#endif //FRAC_H
