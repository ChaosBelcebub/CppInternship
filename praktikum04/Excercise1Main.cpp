// Aufgabe 1

#include <iostream>

int main()
{
  int i, result;
  i = 1;
  result = 0;
  while (i <= 100)
  {
    result += i;
    ++i;
  }

  std::cout << "Summe der Zahlen von 1 bis 100: " << result;
  std::cout << std::endl;
}
