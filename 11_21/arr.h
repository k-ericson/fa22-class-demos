#ifndef ARR_H
#define ARR_H

#include <iostream>
using namespace std;
template <typename Tire>
class arr{
 private:
  int size;
  Tire *data;
  Tire garbage;
 public:
  arr();
  ~arr();
  Tire get(int idx);
  void set(int idx, Tire val);
};

template <typename Rim>
arr<Rim>::arr() {
  size = 50;
  data = new Rim[size];
  garbage = 0;
}

template <typename Blue>
arr<Blue>::~arr() {
  delete[] data;
}

template <typename Honda>
Honda arr<Honda>::get(int idx) {
  if (idx >= 0 && idx < size) {
    return data[idx];
  }
  cerr << "Bad idx: " << idx << endl;
  return garbage;
}

template <typename T>
void arr<T>::set(int idx, T val) {
  if (idx >= 0 && idx < size) {
    data[idx] = val;
  }
  else {
    cerr << "Bad idx: " << idx << endl;
  }
}

#endif //ARR_H
