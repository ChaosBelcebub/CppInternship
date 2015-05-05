// Aufgabe 3

#include <iostream>
#include <stdlib.h>

using namespace std;

bool field[8][8];
int destX;
int destY;

bool moveKnight(int posX, int posY)
{
  // Prüfe ob die Werte im Feld liegen
  if (posX < 0 || posX > 7 ||  posY < 0 || posY > 7)
  {
    return false;
  }
  // Prüfen ob das ziel erreicht wurde
  else if (posX == destX && posY == destY)
  {
    // cout << "Treffer!" << endl;
    return true;
  }
  // Prüfen ob das Feld bereits erreicht wurde
  else if (field[posX][posY] == true)
  {
    return false;
  }
  else
  {
    // Aufrufen der möglichekeiten
    field[posX][posY] = true;
    moveKnight(posX + 2, posY + 1);
    moveKnight(posX + 2, posY - 1);
    moveKnight(posX - 2, posY + 1);
    moveKnight(posX - 2, posY - 1);
    moveKnight(posX + 1, posY + 2);
    moveKnight(posX + 1, posY - 2);
    moveKnight(posX - 1, posY + 2);
    moveKnight(posX - 1, posY - 2);
  }
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

    destX = atoi(argv[3]);
    destY = atoi(argv[4]);
    moveKnight(atoi(argv[1]), atoi(argv[2]));

  }
}

/* 1. Ja, auf jeden Fall. Irgendwann existieren keine felder mehr um ein
 *    Feld das noch nie besucht wurde und die Funktion springt eine Ebene höher
 *    bis die Rekursion beendet ist.
 * 2. Ja
 * 3. Es wird mindestens 1 Weg gefunden
 * 4. Schwer aufzuschreiben
 */
