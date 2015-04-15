// Aufgabe 4

#include <iostream>
#include <stdlib.h>

int main()
{
  for (int i = 0; i < 10; ++i)
  {
    std::cout << i + 1 << ": " << rand() << std::endl;
  }
}
