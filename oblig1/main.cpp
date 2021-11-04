#include "oppgave_a.cpp"
#include "oppgave_b.cpp"
#include <iostream>
#include <iterator>

using namespace std;

const int length = 5;
double temperatures[length];

int main() {
  oppgave_b(temperatures, length);

  copy(begin(temperatures), end(temperatures), ostream_iterator<int>(cout, "\n"));
}
