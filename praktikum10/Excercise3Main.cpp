// Aufgabe 3
// Software zur Unterstützung von Wohnungsverwaltung

#include <iostream>
using namespace std;

// Struktur einer Wohnung
struct Whg
{
  int z; // Anzahl der Zimmer
  bool f; // Ist Wohnung frei?
  float q; // Quadratmeter Wohnfläche
};

bool istFrei(Whg x)
{
  return x.f;
}

void setzeBelegt(Whg &x)
{
  
}
