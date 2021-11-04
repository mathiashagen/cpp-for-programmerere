#include "set.hpp"
#include <iostream>

using namespace std;

Set::Set() {
  set = vector<int>();
}

Set &Set::operator+=(const Set &other) {
  for (size_t i = 0; i < other.set.size(); i++) {
    bool found = false;
    for (size_t j = 0; j < set.size(); j++) {
      if (other.set.at(i) == set.at(j)) {
        found = true;
      }
    }
    if (!found) {
      set.emplace_back(other.set.at(i));
    }
  }
  return *this;
}

Set Set::operator+(int number) {
  bool found = false;
  for (size_t i = 0; i < set.size(); i++) {
    if (number == set.at(i)) {
      found = true;
    }
  }
  if (!found) {
    set.emplace_back(number);
  }
  return *this;
}

Set &Set::operator=(const Set &other) {
  set.clear();
  for (size_t i = 0; i < other.set.size(); i++) {
    set.emplace_back(other.set.at(i));
  }
  return *this;
}

void Set::print() {
  cout << "{";
  for (size_t i = 0; i < set.size(); i++) {
    if (i != 0) {
      cout << ",";
    }
    cout << set.at(i);
  }
  cout << "}" << endl;
}