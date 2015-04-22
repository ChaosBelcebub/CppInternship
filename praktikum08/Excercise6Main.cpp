// Aufgabe 6

#include <iostream>
using namespace std;

// Unter Protest verwende ich globale Variablen
int kugel[49];
int anzahlKugeln;

void reset();
int ziehe();

int main()
{
  // Setzen der Kugelanzahl
  anzahlKugeln = 49;
  // Initialisieren des Feldes
  reset();
  // Ausgabe der 6 Lottozahlen
  cout << "Die Lottozahlen lauten: ";
  for (int i = 0; i < 6; ++i)
  {
    cout << ziehe()<< " ";
  }
  cout << endl;
}

void reset()
{
  // Initialisieren des Feldes
  for (int i = 0; i < 49; ++i)
  {
    kugel[i] = i + 1;
  }
}

int ziehe()
{
  // Ziehe eine Kugel
  int index = rand() % anzahlKugeln;
  int gezogen = kugel[index];
  // Alle dahinterliegenden Kugeln verschieben
  for (int i = index; i < anzahlKugeln - 1; ++i)
  {
    kugel[i] = kugel[i + 1];
  }
  // Anzahl der Kugeln verringern
  --anzahlKugeln;
  return gezogen;
}
