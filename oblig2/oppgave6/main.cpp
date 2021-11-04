#include <iostream>

using namespace std;

int find_sum(const int *table, int length) {
  int sum = 0;
  for (int i = 0; i < length; i++) {
    sum = sum + table[i];
  }
  return sum;
}

int main() {
  const int length = 20;
  int numbers[length];
  int tenFirst[10];
  int fiveNext[5];
  int fiveLast[5];

  for (int i = 1; i <= length; i++) {
    numbers[i - 1] = i;
    if (i <= 10) {
      tenFirst[i - 1] = i;
    } else if (i > 10 && i < 16) {
      fiveNext[i - 11] = i;
    } else {
      fiveLast[i - 16] = i;
    }
  }

  cout << find_sum(tenFirst, 10) << endl;
  cout << find_sum(fiveNext, 5) << endl;
  cout << find_sum(fiveLast, 5) << endl;
}
