// Aufgabe 1

#include <iostream>
using namespace std;

int produkt(int a, int b);
float produkt(float a, float b);

int main()
{
  // Variablen
  int a, b;
  // Eingabe
  cout << "Bitte zwei Zahlen eingeben:" << endl;
  cin >> a >> b;

  // Ausgabe der Ergebnisse
  cout << produkt(a, b) << endl;
  cout << "Funktionentests:" << endl;
  // Funktioniert:
  cout << produkt(7,5) << endl;
  cout << produkt(1.5f,8.0f) << endl;
  // Funktioniert nicht:
  // produkt(7,5)
  // produkt(1.5,8.0)
  // Grund: double
  // produkt(7,5.0f)
  // produkt(7f,5)
  // Grund: float und int
}

int produkt(int a, int b)
{
  return a * b;
}

float produkt(float a, float b)
{
  return a * b;
}
