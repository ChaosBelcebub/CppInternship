// Aufgabe 5

/* Gefundene Fehler durch lesen:
 * - Methode produkt() hat keinen korrekten returnwert
 * - int main verlangt zwei Eingabewerte, liest aber nur einen ein
 * - Operator OR wird mit ||| angegeben
 * - Fehlende Klammer nach dem AND Operator
 *
 * Gefundene Fehler durch abtippen:
 * - Fehlender << zwischen produkt() und endl
 * - in der letzten Ausgabezeile stand end anstatt endl
 */

#include <iostream>
using namespace std;

int summe(int a, int b);
int produkt(int a, int b);

int main()
{
  int i, j;
  cout << "Bitte zwei Zahlen eingeben: ";
  cin >> i;
  cin >> j;

  cout << "i + j = " << summe(i, j) << endl;
  cout << "i * J = " << produkt(i, j) << endl;
  cout << "i || j = " << (i || j) << endl;
  cout << "i && j = " << (i && j) << endl;
  return 0;
}

int summe(int a, int b)
{
  return a + b;
}

int produkt(int a, int b)
{
  return a * b;
}
