// Aufgabe 2

#include <iostream>
using namespace std;

struct grid
{
  int ix;
  int iy;
};

void vertauschen(grid *koord1, grid *koord2)
{
  cout << "vertauscht" << endl;
}

int main()
{
  grid g;
  grid g2;
  g.ix = 42;
  g.iy = 1;
  vertauschen(g, g2);
}
