// Aufgabe 2.3

#include <iostream>
using namespace std;

int main()
{
  // Variablen
  char c[100] = { };
  int d = 1;
  int result = 0;
  // Einlesen
  cout << "Bitte Ganzzahl eingeben:" << endl;
  cin >> c;
  
  // Iterieren von hinten nach vorne
  for (int i = 99; i >= 0; --i)
  {
    // Prüfen ob etwas an der stelle steht
    if (*(c+i) != 0)
    {
      // Prüfen ob es sich um eine Zahl handelt
      if (*(c+i) < 58 && *(c+i) > 47)
      {
        // Zahl mit d multiplizieren
        result += d * ((int)*(c+i) - 48);
        // Eine null an d anhängen
        d *= 10;
      }
      else if (i == 0 && *(c+i) == 45)
      {
        // Sollte an erster stelle ein - stehen: ignorieren
        continue;
      }
      else
      {
        // Ausgabe das es sich nicht um eine Zahl handelt
        cout << "Ganzzahl enthält regelwidrige Zeichen!" << endl;
        return 0;
      }
    }
  }
  // Ausgabe
  cout << "Integer lautet: " << result << endl;
}
