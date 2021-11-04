#include "set.hpp"
#include <iostream>

using namespace std;

int main() {
  Set setA;
  setA + 2;
  setA + 5;
  setA + 9;
  setA.print();

  Set setB;
  setB + 1;
  setB + 2;
  setB + 3;
  setB.print();

  Set sumAB;
  sumAB = setA;
  sumAB += setB;
  sumAB.print();

  setA + 2;
  setA.print();
}