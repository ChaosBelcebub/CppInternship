// Aufgabe 2

#include <iostream>
using namespace std;

int main()
{
  unsigned short int num1 = 1;
  unsigned int num2 = 1;
  unsigned long int num3 = 1;
  
  int count = 0;
  while (num1 != 0)
  {
    num1 *= 2;
    ++count;
  }
  cout << "sizeof(unsigned short int): ";
  cout << sizeof(unsigned short int) << " Byte" << endl;
  cout << "Berechnete Bitanzahl: " << count << endl << endl;

  count = 0;
  while (num2 != 0)
  {
    num2 *= 2;
    ++count;
  }
  cout << "sizeof(unsigned int): " << sizeof(unsigned int);
  cout << " Byte" << endl;
  cout << "Berechnete Bitanzahl: " << count << endl << endl;

  count = 0;
  while (num3 != 0)
  {
    num3 *= 2;
    ++count;
  }
  cout << "sizeof(unsigned long int): ";
  cout << sizeof(unsigned long int) << " Byte" << endl;
  cout << "Berechnete Bitanzahl: " << count << endl << endl;
}

// Das Verfahren ist nicht mit einem normalen Int möglich da es
// nach erreichen des Max Wertes ins Negative springt.
