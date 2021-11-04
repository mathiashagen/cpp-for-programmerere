#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main() {
  vector<double> numbers;

  numbers.emplace_back(3);
  numbers.emplace_back(69);
  numbers.emplace_back(420);
  numbers.emplace_back(454);
  numbers.emplace_back(23);

  cout << numbers.front() << endl;
  cout << numbers.back() << endl;

  numbers.emplace(numbers.begin() + 1, 90);

  cout << numbers.front() << endl;

  vector<double>::iterator it = find(numbers.begin(), numbers.end(), 420);

  if (it != numbers.end())
    cout << it.operator*() << endl;
}
