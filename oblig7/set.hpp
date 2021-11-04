#pragma once

#include <vector>

using namespace std;

class Set {
public:
  Set();
  Set &operator+=(const Set &other);
  Set operator+(int number);
  Set &operator=(const Set &other);
  void print();

private:
  vector<int> set;
};