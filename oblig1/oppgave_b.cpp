#include <cstdlib>
#include <fstream>
#include <iostream>

using namespace std;

void oppgave_b(double temperatures[], int length) {
  const char filename[] = "tallfil.dat";
  ifstream file;
  file.open(filename);
  if (!file) {
    cout << "Feil ved åpning av innfil." << endl;
    exit(EXIT_FAILURE);
  }

  int number;
  int counter = 0;
  while (file >> number) {
    temperatures[counter] = number;
    counter++;
    if (counter > length) {
      break;
    }
  }
}