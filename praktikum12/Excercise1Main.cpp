// Aufgabe 1

#include <iostream>
using namespace std;

void menu();

int main()
{
  char warteschlange[6];

  for (int i = 0; i < 6; ++i)
  {
    warteschlange[i] = 32;
  }

  int posinsert = 0, posremove = 0, anz = 0;
  char c;
  bool run = true;
  
  cout << "Zyklische Warteschlange" << endl;
  menu();

  while (run)
  {
    cin >> c;
    switch(c)
    {
      case 'a':
      case 'A':
        cout << anz << " Elemente:" << endl;
        cout << "-------------" << endl;
        cout << "|";
        for (int i = 0; i < 6; ++i)
        {
          cout << warteschlange[i] << "|";
        }
        cout << endl << "-------------" << endl;
        break;
      case 'b':
      case 'B':
        run = false;
        break;
      case 'e':
      case 'E':
        if (anz < 6)
        {
          cout << "Charakter eingeben: ";
          cin >> warteschlange[posinsert];
          ++anz;
          posinsert = ++posinsert % 6;
        }
        else
        {
          cout << "Warteschlange voll!" << endl;
        }
        break;
      case 'l':
      case 'L':
        if (anz > 0)
        {
          warteschlange[posremove] = 32;
          --anz;
          posremove = ++posremove % 6;
        }
        else
        {
          cout << "Warteschlange bereits leer!" << endl;
        }
        break;
      default:
        cout << "Unbekannte Eingabe!" << endl;
        menu();
    }
  }
}

void menu()
{
  cout << "----------------" << endl;
  cout << " # a - Ausgeben" << endl;
  cout << " # b - Beenden" << endl;
  cout << " # e - Eingeben" << endl;
  cout << " # l - Löschen" << endl;
  cout << "----------------" << endl;
}
