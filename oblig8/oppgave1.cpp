#include <iomanip>
#include <iostream>

using namespace std;

template <typename Type>
bool equal(Type a, Type b) {
  cout << "Template: " << a << " " << b << endl;
  if (a == b) {
    return true;
  }
  return false;
}

bool equal(double a, double b) {
  setprecision(7);
  cout << "Double: " << a << " " << b << endl;

  double marginOfError = 0.00001;

  if ((a - b) < marginOfError) {
    return true;
  }
  return false;
}

int main() {
  int a = 5;
  int b = 6;
  if (equal(a, b)) {
    cout << "a and b is equal" << endl;
  } else {
    cout << "a and b is not equal" << endl;
  }

  double c = 2.0001;
  double d = 2.00011;
  if (equal(c, d)) {
    cout << "c and d is equal" << endl;
  } else {
    cout << "c and d is not equal" << endl;
  }
}
