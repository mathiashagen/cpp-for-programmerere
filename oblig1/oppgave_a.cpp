#include <iostream>

using namespace std;

void oppgave_a(int length) {
  int under = 0;
  int mellom = 0;
  int over = 0;

  cout << "Du skal skrive inn " << length << " temperaturer\n";
  for (int i = 0; i < 5; i++) {
    cout << "Temperatur nr " << i + 1 << ": ";
    int temperatur;
    cin >> temperatur;
    if (temperatur < 10) {
      under++;
    } else if (temperatur > 20) {
      over++;
    } else {
      mellom++;
    }
  }
  cout << "Antall under 10: " << under << endl;
  cout << "Antall mellom 10 og 20: " << mellom << endl;
  cout << "Antall over 20: " << over << endl;
}
