// a02b05.cpp

#include <iostream>
using namespace std;

void f1(void);
void f2(void);

int zahl = 3; // Globale Variable

int main()
{
  int zahl; // Lokal bezüglich main()
  f1();
  cout << zahl << endl;
  return 0;
}

void f1()
{
  cout << zahl << endl;
  f2();
}

void f2()
{
  int zahl = 7; // Lokal bezüglich f2()
  cout << zahl << endl;
}

/* Erwartete Ausgabe:
 * 3
 * 7
 * undefinierte Zahl die an dieser Stelle im Speicher steht
 *
 * Tatsächliche Ausgabe:
 * 3
 * 7
 * 0 <- Hier stand zufällig eine null im Speicher
 */
