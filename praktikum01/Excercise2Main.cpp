// Michael Kotzjan
// HFU 01.04.15

#include <iostream>

int main()
{
  /* Unzulässige Variablennamen sind Schlüsselworte, also Bezeichnungen
   * die der gcc für andere Funktionen reserviert hat. Schlüsselworte
   * sind z.B. switch, 1var, main, int, float, ...
  */
  int num;
  float f;
  int num2;

  std::cout << "Ganzzahl eingeben:";
  std::cin >> num;
  std::cout << "Kommazahl eingeben:";
  std::cin >> f;
  std::cout << "Zweite Ganzzahl eingeben:";
  std::cin >> num2;
  std::cout << num << ' ';
  std::cout << f << '\n';
  std::cout << num2 << std::endl;

  return 0;
}
