// Aufgabe 4

#include <iostream>
using namespace std;

int main()
{
  bool a, b, my_xor;

  cout << "Boolsche Variable a geben: ";
  cin >> a;
  cout << "Boolsche Variable b geben: ";
  cin >> b;
  my_xor = (a || b) && !(a && b);
  cout << "XOR: " << my_xor << endl;
}
