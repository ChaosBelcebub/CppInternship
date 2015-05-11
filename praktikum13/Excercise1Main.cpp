// Aufgabe 1

#include <iostream>
#include <string.h>

using namespace std;

void menu();
void add(char* c[]);
void del(char* c[]);
void print(char* c[]);
char** init(int d);
char** resize(char* c[], int dimNew);
void flush();

int posinsert = 0;
int posremove = 0;
int dim = 6;
int count = 0;

int main()
{
  char car;
  int d;
  char** warteschlange = 0;
  warteschlange = init(dim);
  bool run = true;

  menu();

  while(run)
  {
    car = getchar();
    flush();

    switch(car)
    {
      case 'a':
      case 'A':
        print(warteschlange);
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
        cout << "Bitte neue Feldgröße angeben:" << endl;
        cin >> d;
        flush();
        warteschlange = resize(warteschlange, d);
        break;
      case 'i':
      case 'I':
        for (int i = 0; i < dim; ++i)
        {
          delete warteschlange[i];
        }
        delete [] warteschlange;
        cout << "Bitte Feldgröße angeben:" << endl;
        cin >> d;
        flush();
        warteschlange = init(d);
        cout << dim << endl;
        break;
      case 'l':
      case 'L':
        del(warteschlange);
        break;
      case 'z':
      case 'Z':
        cout << "Anzahl der Elemente: " << count << endl;
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

    if (buffer[size - 1] == '\n')
    {
      size--;
      buffer[size] = '\0';
    }

    c[posinsert] = new char[size + 1];

    strncpy(c[posinsert], buffer, size);
    posinsert = ++posinsert % dim;
    ++count;
  }
  else
  {
    cout << "Warteschlange voll!" << endl;
  }
}

void del(char* c[])
{
  if (count > 0)
  {
    delete c[posremove];
    c[posremove] = 0;
    posremove = ++posremove % dim;
    --count;
  }
  else
  {
    cout << "Warteschlange leer!" << endl;
  }
}

void print(char* c[])
{
  cout << "|";
  for (int i = 0; i < dim; ++i)
  {
    if (c[i] != 0)
    {
      cout << c[i] << "|";
    }
    else
    {
      cout << "   |";
    }
  }
  cout << endl;
}

char** init(int d)
{
  if (d > 0)
  {
    dim = d;
    posinsert = 0;
    posremove = 0;
    count = 0;
    char** result = new char*[dim];
    return result;
  }
  else
  {
    cout << "Bitte eine Zahl größer 0 angeben" << endl;
  }
}

char** resize(char* c[], int dimNew)
{
  if (dimNew < 1)
  {
    cout << "Bitte eine Zahl größer 0 angeben" << endl;
    return c;
  }
  else if (dimNew < count)
  {
    cout << "Warteschlange enthält mehr Einträge" << endl;
    cout << "als das neue Feld fassen kann" << endl;
    return c;
  }
  else if (dimNew == count)
  {
    return c;
  }
  else
  {
    char** result = new char*[dimNew];
    int j = 0;

    for (int i = 0; i < dim; ++i)
    {
      if (c[(i + posremove) % dim] != 0)
      {
        result[j] = c[(i + posremove) % dim];
        ++j;
      }
    }

    posremove = 0;
    posinsert = j;
    dim = dimNew;

    for (j; j < dim; ++j)
    {
      result[j] = 0;
    }

    delete [] c;
    return result;
  }
}

void flush()
{
  int i;
  while((i = getchar()) != EOF && i != '\n');
}
