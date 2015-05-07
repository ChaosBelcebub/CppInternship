// Aufgabe 3

#include <stdlib.h>
// stdio.h wird nichtmehr benötigt, dafür iostream
#include <iostream>

struct knoten
{
  int nummer;
  knoten* links;
  knoten* rechts;
};

void drucken(knoten *start);
knoten* wachsen(int);

int main()
{
  knoten* kp;
  kp = wachsen(2);
  drucken(kp);
  delete(kp);
}

knoten* wachsen(int tiefe)
{
  static int nummer = 0;
  knoten* kp;
  kp = new knoten;
  kp->nummer = ++nummer;
  if (tiefe > 0)
  {
    kp->links = wachsen(tiefe - 1);
    kp->rechts = wachsen(tiefe - 1);
  } else {
    kp->links = 0;
    kp->rechts = 0;
  }
  return kp;
}

void drucken(knoten* start)
{
  std::cout << "Nr. " << start->nummer << std::endl;
  if (start->links)
  {
    drucken(start->links);
  }
  if (start->rechts)
  {
    drucken(start->rechts);
  }
}
