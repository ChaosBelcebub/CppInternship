// Aufgabe 2

#include <stdlib.h>
#include <iostream>

int main()
{
  std::string *s, *sPart;
  s = new std::string[7];
  for (int i = 0; i < 7; ++i)
  {
    sPart = new std::string;
    getline(std::cin, *sPart);
    s[i] = *sPart;
  }

  // Ausgabe:
  for (int i = 0; i < 7; ++i)
  {
    std::cout << *(s + i) << std::endl;
  }
}
