// Aufgabe 4

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
  unsigned long int i;
  
  cout << "Bitte Ganzzahl eingeben: ";
  cin >> i;
 
  double result = log10((double)i)/log10(2);
  
  cout << "Benötigt werden: ";
  cout << (int)result + 1;
  cout << " Bit." << endl;
}
