// Aufgabe 4

#include <iostream>
using namespace std;

void my_encode(char *out, const char *in);

int main()
{
  // Variablen
  char s[100] = { };
  char c[100] = "C++_Tutor";

  // Aufruf und ausgabe
  my_encode(s,c);
  cout << s << endl;
}

void my_encode(char *out, const char *in)
{
  // Iterieren über eingabe feld
  for (int i = 0; i < 100; ++i)
  {
    // Prüfen ob ein Zeichen vorhanden ist
    if (*(in+i) != 0)
    {
      // Jedes Zeichen um 1 reduzieren
      *(out+i) = *(in+i) - 1;
    }
  }
}
