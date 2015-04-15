//a02b01.cpp

#include <iostream>
using namespace std;

int main()
{
  cout << 777 << endl;
  cout << 1.5 * 7 << endl;
  cout << 'A' + 1 << endl;
  cout << 'A' * 1.5 << endl;
  cout << 'A' * 1 << endl;
  cout << 'A' * 1.0 << endl;
  return 0;
  /* Erwartete Ausgabe:
   * 777
   * 10.5
   * 66
   * 97
   * 66
   * 66.0
   * Tatsächliche Ausgabe:
   * 777
   * 10.5
   * 66
   * 97.5
   * 65
   * 65
   */
}
