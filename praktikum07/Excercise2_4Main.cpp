// Aufgabe 2.4

#include <iostream>
using namespace std;

int main()
{
  // Variablen
  char s[100] = { };
  char tmp;
  int size = 0;

  // Einlesen
  cout << "Bitte C-String eingeben:" << endl;
  cin >> s;

  // Wert an Index 0 speichern
  tmp = *(s+0);

  // Iterieren von hinten nach vorne
  for (int i = 99; i >= 0; --i)
  {
    // Prüfen ob es das letzte zeichen des strings ist
    if (*(s+i) != 0 && *(s+(i + 1)) == 0)
    {
      // Größe berechnen und festlegen
      size = i + 1;
    }
    
    // Prüfen ob ein Zeichen vorhanden ist
    if (*(s+i) != 0)
    {
      // Zeichen nach rechts rotieren
      *(s+((i + 1) % size)) = *(s+i);
    }
  }

  // Prüfen ob String größer 1
  if (size > 1)
  {
    // Index 1 setzen
    *(s+1) = tmp;
  }

  // Ausgabe
  cout << s << endl;
}
