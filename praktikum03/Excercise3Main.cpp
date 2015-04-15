// Aufgabe 3

#include <iostream>
using namespace std;

int main()
{
  int i, j;

  cout << "Bitte eine Zahl eingeben: ";
  cin >> i;
  cout << "Bitte eine Zahl eingeben: ";
  cin >> j;
  cout << "Bedingung: " << i << " < " << j << " ist: ";
  if (i < j)
  {
    cout << "erfüllt" << endl;
  }
  else
  {
    cout << "nicht erfüllt" << endl;
  }
  cout << "Bedingung: " << i << " > " << j << " ist: ";
  if (i > j)
  {
    cout << "erfüllt" << endl;
  }
  else
  {
    cout << "nicht erfüllt" << endl;
  }
  cout << "Bedingung: " << i << " >= " << j << " ist: ";
  if (i >= j)
  {
    cout << "erfüllt" << endl;
  }
  else
  {
    cout << "nicht erfüllt" << endl;
  }
  cout << "Bedingung: " << i << " <= " << j << " ist: ";
  if (i <= j)
  {
    cout << "erfüllt" << endl;
  }
  else
  {
    cout << "nicht erfüllt" << endl;
  }
  cout << "Bedingung: " << i << " == " << j << " ist: ";
  if (i == j)
  {
    cout << "erfüllt" << endl;
  }
  else
  {
    cout << "nicht erfüllt" << endl;
  }
  cout << "Bedingung: " << i << " != " << j << " ist: ";
  if (i != j)
  {
    cout << "erfüllt" << endl;
  }
  else
  {
    cout << "nicht erfüllt" << endl;
  }
}
