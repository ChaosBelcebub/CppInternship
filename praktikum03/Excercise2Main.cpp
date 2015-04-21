// Aufgabe 2

/* 3 - 1 * 7 + 9 % 5 = 0
 * -3 + 4 * 5 - 6 = 11
 * 3 + 4 % 5 - 6 = 1
 * (3 - 1) * ((7 + 9) / 5) = 6
 * (3 - (1 * 7) + 9) % 5 = 0
 * 17 / 5 - 3 * 4 = -9
 * 17 / (5 - 3) * 4 = 32
 * 17 / ((5 - 3) * 4) = 2 Fehler! Richtiges Ergebnis 32
 * -3 * ((17 % -6) / 2) = 6 Fehler! Vorzeichen vergessen
 */

#include <iostream>
using namespace std;

int main()
{
  int solution;
  solution = 3 - 1 * 7 + 9 % 5;
  cout << "3 - 1 * 7 + 9 % 5 = " << solution << endl;
  solution = -3 + 4 * 5 - 6;
  cout << "-3 + 4 * 5 - 6 = " << solution << endl;
  solution = 3 + 4 % 5 - 6;
  cout << "3 + 4 % 5 - 6 = " << solution << endl;
  solution = (3 - 1) * ((7 + 9) / 5);
  cout << "(3 - 1) * ((7 + 9) / 5) = " << solution << endl;
  solution = (3 - (1 * 7) + 9) % 5;
  cout << "(3 - (1 * 7) + 9) % 5 = " << solution << endl;
  solution = 17 / 5 - 3 * 4;
  cout << "17 / 5 - 3 * 4 = " << solution << endl;
  solution = 17 / (5 - 3) * 4;
  cout << "17 / (5 - 3) * 4 = " << solution << endl;
  solution = 17 / ((5 - 3) * 4);
  cout << "17 / ((5 - 3) * 4) = " << solution << endl;
  solution = -3 * ((17 % -6) / 2);
  cout << "-3 * ((17 % -6) / 2) = " << solution << endl;
}
