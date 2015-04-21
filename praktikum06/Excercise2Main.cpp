// Aufgabe 2

#include <iostream>
using namespace std;

int main()
{
  // Variablen
  int prim[1000] = {};
  int count = 0;
  int num = 2;
  bool isprim;

  // Erste Primzahl initialisieren
  prim[count] = num;
  ++count;

  // Weitere 999 Primzahlen eingeben
  while (count < 1000)
  {
    ++num;
    isprim = true;
    // Alle bsherigen Primzahlen zum prüfen verwenden
    for (int i = 0; i < count; ++i)
    {
      // num ist nur Prim wenn nicht durch bisherige Primzahlen
      // teilbar
      if (num % prim[i] == 0)
      {
        isprim = false;
        break;
      }
    }

    // Zahl hinzufügen wenn Prim
    if (isprim)
    {
      prim[count] = num;
      ++count;
    }
  }
  // Tausendste Primzahl ausgeben
  cout << "1000. Primzahl ist " << prim[count - 1] << endl;
}
