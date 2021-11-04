#include <algorithm>
#include <cmath>
#include <iostream>
#include <vector>

using namespace std;

ostream &operator<<(ostream &out, const vector<int> &table) {
  for (auto &e : table)
    out << e << " ";
  return out;
}

int main() {
  vector<int> v1 = {3, 3, 12, 14, 17, 25, 30};
  cout << "v1: " << v1 << endl;

  vector<int> v2 = {2, 3, 12, 14, 24};
  cout << "v2: " << v2 << endl;

  vector<int>::iterator it = find_if(v1.begin(), v1.end(), [](const int &i) {
    if (i > 15) {
      return true;
    } else {
      return false;
    }
  });
  cout << "Første verdi i v1 som er større enn 15: " << *it << endl;

  bool equala = equal(v1.begin(), v1.begin() + 5, v2.begin(), v2.begin() + 5, [](const int &i, const int &j) {
    if (abs(i - j) <= 2) {
      return true;
    }
    return false;
  });

  if (equala) {
    cout << "[v1.begin, v1.begin + 5] og v2 er like." << endl;
  } else {
    cout << "[v1.begin, v1.begin + 5] og v2 er ulike." << endl;
  }

  bool equalb = equal(v1.begin(), v1.begin() + 4, v2.begin(), v2.begin() + 4, [](const int &i, const int &j) {
    if (abs(i - j) <= 2) {
      return true;
    }
    return false;
  });

  if (equalb) {
    cout << "[v1.begin, v1.begin + 4] og v2 er like." << endl;
  } else {
    cout << "[v1.begin, v1.begin + 4] og v2 er ulike." << endl;
  }

  replace_copy_if(
      v1.begin(), v1.end(), v1.begin(), [](const int &i) {
        if (i % 2 == 1) {
          return true;
        } else {
          return false;
        }
      },
      100);
  cout << "v1 oddetall byttet ut med 100: " << v1 << endl;
}
