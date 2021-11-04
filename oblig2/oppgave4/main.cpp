#include <iostream>

int main() {
  /*
  int a = 5;
  int &b; // kan ikke lage en variabel som er en adresse til en annen variabel som ikke finnes
  int *c;
  c = &b; 
  *a = *b + *c; // Å flytte pointeren fra en int gir ingen mening, man trenger bare å skrive "a" isteden for "*a"
  &b = 2;
  */

  int a = 5;
  int *b = 0;
  int *c;
  c = b;
  a = *b + *c;
  *b = 2;
}
