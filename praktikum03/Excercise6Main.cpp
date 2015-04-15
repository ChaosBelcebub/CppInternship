// Aufgabe 6

#include <iostream>
using namespace std;

int main()
{
  int a;
  cout << "Ganzzahl eingeben: ";
  cin >> a;
  if (a % 2 == 0)
  {
    cout << a << " ist gerade." << endl;
  }
  else
  {
    cout << a << " ist ungerade." << endl;
  }
}
