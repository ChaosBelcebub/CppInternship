// Aufgabe 1

#include <iostream>
#include <string.h>

using namespace std;

void menu();
void add(char* c[]);
void del();
void print(char* c);
char** init(int dim);
char** resize(char* c[], int dimNew);

int posinsert = 0;
int posremove = 0;
int dim = 6;
int count = 0;

int main()
{
  char car;
  char** warteschlange = 0;
  warteschlange = init(dim);
  bool run = true;

  menu();

  while(run)
  {
    car = getchar() - '0';

    switch(car)
    {
      case 'a':
      case 'A':
        cout << "print" << endl;
        break;
      case 'b':
      case 'B':
        run = false;
        break;
      case 'e':
      case 'E':
        add(warteschlange);
        break;
      case 'g':
      case 'G':
        cout << "Größe ändern" << endl;
        break;
      case 'i':
      case 'I':
        cout << "Initialisieren" << endl;
        break;
      case 'l':
      case 'L':
        cout << "Löschen" << endl;
        break;
      case 'z':
      case 'Z':
        cout << "Anzahl ausgeben" << endl;
        break;
      default:
        cout << "Befehl nicht bekannt!" << endl;
        menu();
    }
  }
}

void menu()
{
  cout << " # a - Warteschlange Ausgeben" << endl;
  cout << " # b - Beenden" << endl;
  cout << " # e - Eingeben" << endl;
  cout << " # g - Größe ändern" << endl;
  cout << " # i - Initialisieren" << endl;
  cout << " # l - Löschen" << endl;
  cout << " # z - Anzahl ausgeben" << endl;
}

void add(char* c[])
{
  if (count < dim)
  {
    char buffer[100];
    cout << "Bitte C-String eingeben:" << endl;
    fgets(buffer, 100, stdin);

    int size = strlen(buffer);

  }
  else
  {
    cout << "Warteschlange voll!" << endl;
  }
}

void del()
{

}

void print(char* c)
{
}

char** init(int dim)
{
  char** result = new char*[dim];
  return result;
}

char** resize(char* c[], int dimNew)
{

}
