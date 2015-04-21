// Aufgabe 2

#include <iostream>
#include <cmath>
using namespace std;

double func(int count);
double func(double epsilon);

int main()
{
  // Variablen
  int count;
  double epsilon;
  // Einlesen der Summenanzahl und ausgabe des Ergebnis
  cout << "Bitte Anzahl der Summen angeben:" << endl;
  cin >> count;
  cout.precision(15);
  cout << func(count) << endl;

  // Einlesen der Genauigkeit und ausgabe des Ergebnis
  cout << "Bitte Genauigkeit angeben:" << endl;
  cin >> epsilon;
  cout.precision(15);
  cout << func(epsilon) << endl;
}

// Berechnen über die Anzahl der Summen
double func(int count)
{
  // Initialisieren des Ergebnis
  double result = 0.0;
  // Addiere solange bis anzahl der Summen erreicht
  for (double i = 1.0; i <= count; ++i)
  {
    // Addiere Ergebnis mit (1/2)^i
    result += pow((0.5), i);
  }
  return result;
}

// Berechnen über die Genauigkeit
double func(double epsilon)
{
  // Initialisieren des Ergebnis
  double result = 0.0;
  double i = 1.0;
  // Addiere solange das Ergebnis kleiner ist als epsilon
  while (epsilon <= pow((0.5), i))
  {
    result += pow((0.5), i);
    ++i;
  }
  return result;
}
