// Aufgabe 5

#include <iostream>
using namespace std;

void tausch(int& i, int& j);

int main()
{
  // Variablen
  int i1 = 111, i2 = 777;

  // Ausgabe vorher und nachher
  cout << "i1: " << i1 << " i2: " << i2 << endl;
  tausch(i1, i2);
  cout << "i1: " << i1 << " i2: " << i2 << endl;
}

// Tauschen der Variablen via Referenz
void tausch(int & i, int & j)
{
  int temp = i;
  i = j;
  j = temp;
}
