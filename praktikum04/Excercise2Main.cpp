// Aufgabe 2

#include <iostream>

int main()
{
  int i, result;
  i = 2;
  result = 1;

  do
  {
    result *= i;
    ++i;
  } while (i <= 8);

  std::cout << "Ergebnis von 8!: " << result << std::endl;
}
