// Aufgabe 7

#include <iostream>
using namespace std;

int main()
{
  int a, b;
  cout << "Zwei Ganzzahlen eingeben: " << endl;
  cin >> a;
  cin >> b;
  if (a % b == 0)
  {
    cout << a << " ist durch " << b << " teilbar ohne Rest" << endl;
  }
  else
  {
    cout << a << " geteilt durch " << b << " hat Rest ";
    cout << a % b << endl;
  }
}
