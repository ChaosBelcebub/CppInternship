// Aufgabe 1

#include <stdlib.h>
#include <iostream>

int main()
{
  int *ip;
  ip = new (std::nothrow) int[100000000000];

  if (!ip)
  {
    std::cout << "Kein Speicherplatz!" << std::endl;
    exit(1);
  }
  free(ip);
}

/* 2. Es wird eine bad_alloc Exception geworfen
 * 3. Ja
 */
