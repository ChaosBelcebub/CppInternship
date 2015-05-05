// Aufgabe 3

#include <iostream>
#include <stdlib.h>

using namespace std;

bool field[8][8];

bool moveKnight(int posX, int posY)
{
  return true;
}

int main(int argc, char *argv[])
{
  // Prüfen der Parameteranzahl
  if (argc != 5)
  {
    cout << "Schachbrett Springer:" << endl;
    cout << "Using:" << endl;
    cout << "./Excercise3Main <startx> <starty> <destinationx> <destinationy>" << endl;
  }
  else
  {
    // Prüfen ob Parameterwerte innerhalb der grenzen liegen
    for (int k = 1; k < 5; k++)
    {
      if (atoi(argv[k]) < 0 || atoi(argv[k]) > 7)
      {
        cout << "Parameter außerhalb des Feldes!" << endl;
        return 0;
      }
    }

    // Initalisieren des Feldes
    for (int i = 0; i < 8; i++)
    {
      for (int j = 0; j < 8; j++)
      {
        field[i][j] = false;
      }
    }

    moveKnight(atoi(argv[1]), atoi(argv[2]));

  }
}
