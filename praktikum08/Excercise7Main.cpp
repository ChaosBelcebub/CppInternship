// Aufgabe 7

#include <iostream>
using namespace std;

int fakultaet(int n);

int main()
{
  // Einlesen von n
  int n = 0;
  cout << "Bitte n angeben:" << endl;
  cin >> n;
  // Ausgabe der Fakultät
  cout << fakultaet(n) << endl;
}

int fakultaet(int n)
{
  // 0! == 1
  if (n == 0)
  {
    return 1;
  }
  else
  {
    // Fakultät rekursiv berechnen
    return n * fakultaet(n - 1);
  }
}
