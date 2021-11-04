#include <iostream>

int main() {
  double number = 45;
  double *pointer;
  pointer = &number;

  double &ref = number;

  double a = number;
  double b = *pointer;
  double c = ref;
}
