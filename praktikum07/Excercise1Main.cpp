// Aufgabe 1

#include <iostream>
using namespace std;

int main()
{
  // Variablen
  int dim = 5;
  int field[5] = { };

  // Initalisieren des Feldes
  for (int i = 0; i < dim; ++i)
  {
    field[i] = i;
  }

  // Speichern der ersten Stelle
  int tmp = *(field+0);
  // Iterieren über das Feld von hinten nach vorne
  for (int i = dim - 1; i >= 0; --i)
  {
    // Jede Stelle eines nach rechts verschieben
    *(field+((i+1)%dim)) = *(field+i);
  }
  // Index 1 setzen
  *(field+1) = tmp;
  
  // Ausgabe des Feldes
  for (int i = 0; i < dim; ++i)
  {
    cout << *(field+i) << " ";
  }
  cout << endl;
}
