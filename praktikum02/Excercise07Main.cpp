// k04b07.cpp

#include <iostream>
using namespace std;

int main()
{
  int i, num1, num2, num3, num4, num5, resultat;
  num1 = 2;
  num2 = 8;
  num3 = 5;
  num4 = 0;
  num5 = 20;
  for (i = num1; i < num2; i++)
  {
    cout << i << '\t';
  }
  cout << '\n';

  for (i = num3; i > num4; i--)
  {
    cout << i << '\t';
    cout << i * i << '\t';
    cout << '\n';
  }

  resultat = 0;
  for (i = 1; i < num5; i = i + 2)
  {
    resultat = resultat + i;
    cout << "Zwischensumme: " << resultat << endl;
  }
  return 0;
}
