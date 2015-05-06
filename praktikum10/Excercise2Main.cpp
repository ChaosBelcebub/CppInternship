// Aufgabe 2

#include <iostream>
using namespace std;

// Structure
struct grid
{
  int ix;
  int iy;
};

// Vertauscht die Werte zweier Structuren
void vertauschen(grid *koord1, grid *koord2)
{
  int tmpx = (*koord1).ix;
  int tmpy = (*koord1).iy;
  (*koord1).ix = (*koord2).ix;
  (*koord1).iy = (*koord2).iy;
  (*koord2).ix = tmpx;
  (*koord2).iy = tmpy;
  cout << "Vertauscht!" << endl;
}

// Druckt die Strukturen auf die Konsole
void print(grid *g1, grid *g2)
{
  cout << "Structure 1:" << endl;
  cout << (*g1).ix << endl;
  cout << (*g1).iy << endl;
  cout << "Structure 2:" << endl;
  cout << (*g2).ix << endl;
  cout << (*g2).iy << endl;
}

int main()
{
  // Initialisieren
  grid g;
  grid g2;
  g.ix = 42;
  g.iy = 1;
  g2.ix = 128;
  g2.iy = -10;
  // Ausdrucken vorher
  print(&g, &g2);
  // Vertauschen
  vertauschen(&g, &g2);
  // Ausdrucken nachher
  print(&g, &g2);
}
