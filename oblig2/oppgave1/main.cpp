#include <iostream>

using namespace std;

int main() {
  int i = 3;
  int j = 5;
  int *p = &i;
  int *q = &j;

  cout << i << endl;
  cout << &i << endl;
  cout << j << endl;
  cout << &j << endl;
  cout << p << endl;
  cout << &p << endl;
  cout << q << endl;
  cout << &q << endl;

  *p = 7;
  *q += 4;
  *q = *p + 1;
  p = q;
  cout << *p << " " << *q << endl;
}
