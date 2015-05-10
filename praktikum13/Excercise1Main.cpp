// Aufgabe 1

#include <iostream>

using namespace std;

void menu();
void add(char* c[], char* cNew);
void del();
void print(char* c[]);
int count(char* c[]);
char* init(int dim);
char* resize(char* c[], int dimNew);

int posinsert = 0;
int posremove = 0;
int dim = 6;

int main()
{
  char car;
  char puffer[100];
  char* warteschlange;
  warteschlange = init(dim);
  bool run = true;

  menu();

  while(run)
  {
    cin >> car;
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
        cout << "Bitte C-String eingeben:" << endl;
        cin >> puffer;
        cout << puffer;
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

void add(char* c[], char* cNew)
{

}

void del()
{

}

void print(char* c[])
{
  cout << "|";
  for (int i = 0; i < dim; ++i)
  {
    if (c[i] != 0)
    {
      cout << c[i];
    }
    else
    {
      cout << "   ";
    }
  }
  cout << endl;
}

int count(char* c[])
{

}

char* init(int dim)
{
  char* result = new char[dim];
  return result;
}

char* resize(char* c[], int dimNew)
{

}
