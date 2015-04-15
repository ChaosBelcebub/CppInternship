// Aufgabe 3

#include <iostream>

int main()
{
  std::cout << "Schaltjahre seit 1900:" << std::endl;
  for (int i = 1900; i <= 2015; ++i)
  {
    if ((i % 4 == 0 && i % 100 != 0) || (i % 400 == 0))
    {
      std::cout << i << "\t";
    }
  }
  std::cout << std::endl;
}
