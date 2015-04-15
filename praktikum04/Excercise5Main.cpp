// Aufgabe 5

#include <iostream>
using namespace std;

int main()
{
  char c;
  cout << "Geben sie ein Zeichen ein: ";
  cin >> c;
  int i = (int)c;
  if (i > 96 && i < 123)
  {
    cout << (char)(i - 32) << endl;
  }
  else
  {
    cout << c << endl;
  }
}
