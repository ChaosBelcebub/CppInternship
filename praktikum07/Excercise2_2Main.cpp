// Aufgabe 2.2

#include <iostream>
using namespace std;

int main()
{
  // Initialisieren als leeres Feld
  char s[100] = { };
  
  // Einlesen
  cout << "Bitte  C-String eingeben:" << endl;
  cin >> s;

  // Iterieren über Feld
  for (int i = 0; i < 100; ++i)
  {
    // Prüfen ob es sich um einen kleinbuchstaben handelt
    if (*(s+i) > 96 && *(s+i) < 123)
    {
      // Umwandeln in Großbuchstaben
      *(s+i) -= 32;
    }
  }

  // Ausgabe
  cout << s << endl;
}
