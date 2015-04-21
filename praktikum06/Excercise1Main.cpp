// Aufgabe 1

#include <iostream>
using namespace std;

void menu();

int main()
{
  // Variablen
  int stack[10] = {};
  int count = 0;
  char c;
  bool run = true;

  // Menü aufrufen
  menu();

  while (run)
  {
    // Befehl einlesen
    cin >> c;

    switch (c)
    {
      case 'a':
      case 'A':
        if (count > 0)
        {
          cout << "Oberste Ganzzahl:" << endl;
          cout << stack[count - 1] << endl;
          --count;
        }
        else
        {
          cout << "Stack ist leer." << endl;
        }
        break;
      case 'e':
      case 'E':
        if (count < 10)
        {
          cout << "Ganzzahl eingeben:" << endl;
          cin >> stack[count];
          ++count;
        }
        else
        {
          cout << "Stack bereits voll!" << endl;
        }
        break;
      case 'b':
      case 'B':
        run = false;
        break;
      default:
        cout << "Aktion unbekannt" << endl << endl;
        menu();
        break;
    }
  }
}

// Ausgabe eines Menüs
void menu()
{
  cout << "Stack der Größe 10" << endl;
  cout << "------------------" << endl;
  cout << "Aktion wählen:" << endl;
  cout << "a - ausgeben" << endl;
  cout << "e - eingeben" << endl;
  cout << "b - beenden" << endl;
}

// Getestet wurde:
// Start des Programmes, a drücken: Stack ist leer
// 3 Zahlen eingeben, 3 mal ausgeben: Reihenfolge korrekt.
// 10 Zahlen eingeben, eine Weitere: Stack ist voll
// 6 Zahlen ausgeben, eine weitere hinzufügen, ausgeben:
// Reihenfolge korrekt
// e0e1e2e3e4e5e6e7e8e9 eingegeben: 10 Ziffern wurden eingegeben
