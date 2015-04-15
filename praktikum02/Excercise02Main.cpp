// a02b02.cpp

#include <iostream>
using namespace std;

int main()
{
  cout << "Groesse: " << sizeof('0') << " Byte" << endl;
  cout << "Groesse: " << sizeof(1) << " Byte" << endl;
  cout << "Groesse: " << sizeof(1.0) << " Byte" << endl;
  cout << "Groesse: " << sizeof(1.0f) << " Byte" << endl;
  
  cout << "Groesse: " << sizeof(char) << " Byte" << endl;
  cout << "Groesse: " << sizeof(int) << " Byte" << endl;
  cout << "Groesse: " << sizeof(float) << " Byte" << endl;
  cout << "Groesse: " << sizeof(double) << " Byte" << endl;

  /* Erwartete Größen:
   * 1
   * 4
   * 8
   * 4
   * 1
   * 4
   * 4
   * 8
   * Tatsächliche Größen:
   * Alle korrekt
   */
}
