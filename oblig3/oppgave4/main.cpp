#include <iostream>
#include <string>

using namespace std;

int main() {
  string word1, word2, word3;

  cout << "Word 1:";
  cin >> word1;
  cout << "Word 2:";
  cin >> word2;
  cout << "Word 3:";
  cin >> word3;

  string sentence = word1 + " " + word2 + " " + word3 + ".";
  cout << "Sentence: " + sentence << endl;

  cout << "Length of strings:\n";
  cout << "Word1: " << word1.length() << endl;
  cout << "Word2: " << word2.length() << endl;
  cout << "Word3: " << word3.length() << endl;
  cout << "Sentence: " << sentence.length() << endl;

  string sentence2 = sentence;
  if (sentence2.length() >= 10) {
    sentence2[9] = 'x';
  }
  if (sentence2.length() >= 12) {
    sentence2[11] = 'x';
  }
  cout << sentence << endl;
  cout << sentence2 << endl;

  string sentence_start = sentence.substr(0, 5);
  cout << sentence << endl;
  cout << sentence_start << endl;

  if (sentence.find("hallo") != string::npos) {
    cout << "hallo found!" << endl;
  }

  int loc[100], i = 0;
  int pos = sentence.find("er", 0);
  while (pos != string::npos) {
    loc[i] = pos;
    pos = sentence.find("er", pos + 1);
    i++;
  }

  cout << i;
}
