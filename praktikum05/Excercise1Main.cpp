// Aufgabe 1

#include <iostream>
using namespace std;

int menu();

int main()
{
  bool run = true;
  char c;
  menu();
  while(run)
  {
    cin >> c;
    switch (c)
    {
      case 'i':
      case 'I':
        cout << "...initialisieren..." << endl;
        break;
      case 'z':
      case 'Z':
        cout << "...zurücksetzen..." << endl;
        break;
      case 's':
      case 'S':
        cout << "...starten..." << endl;
        break;
      case 'd':
      case 'D':
        cout << "...drucken..." << endl;
        break;
      case 'e':
      case 'E':
        run = false;
        break;
      default:
        cout << "Unbekannte Aktion " << c << "." << endl;
        menu();
    }
  }
}

int menu()
{
  cout << "Aktion wählen:" << endl;
  cout << "------------------" << endl;
  cout << "i - initialisieren" << endl;
  cout << "z - zurücksetzen" << endl;
  cout << "s - starten" << endl;
  cout << "d - drucken" << endl;
  cout << "e - beenden" << endl;
  cout << endl;
}
