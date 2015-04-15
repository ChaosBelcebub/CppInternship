// Excercise 1

#include <iostream>
using namespace std;

int main()
{
  int input;
  cout << "Centbetrag als Integer eingeben: ";
  cin >> input;

  int euro, cent;
  euro = input / 100;
  cent = input % 100;

  cout << euro << " Euro, " << cent << " Cent." << endl;
}
