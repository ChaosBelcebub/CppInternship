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

// Initialize global var
int posinsert = 0;
int posremove = 0;
int dim = 6;
int count = 0;

// Main
int main()
{
  // Initialize
  char car;
  int d;
  char** warteschlange = 0;
  warteschlange = init(dim);
  bool run = true;

  // Display menu
  menu();

  while(run)
  {
    // Read char
    car = getchar();
    // Clean stdin
    flush();

    // Switch Case
    switch(car)
    {
      case 'a':
      case 'A':
        // Print queue on console
        print(warteschlange);
        break;
      case 'b':
      case 'B':
        // Exit program
        run = false;
        break;
      case 'e':
      case 'E':
        // Add string
        add(warteschlange);
        break;
      case 'g':
      case 'G':
        // Resize
        cout << "Bitte neue Feldgröße angeben:" << endl;
        cin >> d;
        flush();
        warteschlange = resize(warteschlange, d);
        break;
      case 'i':
      case 'I':
        // Re-Initialize queue
        for (int i = 0; i < dim; ++i)
        {
          delete warteschlange[i];
        }
        delete [] warteschlange;
        cout << "Bitte Feldgröße angeben:" << endl;
        cin >> d;
        flush();
        warteschlange = init(d);
        break;
      case 'l':
      case 'L':
        // Delete entry in queue
        del(warteschlange);
        break;
      case 'z':
      case 'Z':
        // Print count
        cout << "Anzahl der Elemente: " << count << endl;
        break;
      default:
        // Default
        cout << "Befehl nicht bekannt!" << endl;
        menu();
    }
  }

  for (int i = 0; i < dim; ++i)
  {
    delete warteschlange[i];
  }
  delete [] warteschlange;
}

// Print menu on console
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

// Add a c-string to an given array
void add(char* c[])
{
  // Check if array is full
  if (count < dim)
  {
    // Read into buffer
    char buffer[100];
    cout << "Bitte C-String eingeben:" << endl;
    fgets(buffer, 100, stdin);

    // Calculate length
    int size = strlen(buffer);

    // Replace newline with terminating 0
    if (buffer[size - 1] == '\n')
    {
      size--;
      buffer[size] = '\0';
    }

    c[posinsert] = new char[size + 1];

    // Insert string
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
  // Check if array is empty
  if (count > 0)
  {
    // Delete
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

// Print array
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

// Initialize array
char** init(int d)
{
  if (d > 0)
  {
    dim = d;
    posinsert = 0;
    posremove = 0;
    count = 0;
    char** result = new char*[dim];
    for (int i = 0; i < dim; ++i)
    {
      result[i] = 0;
    }
    return result;
  }
  else
  {
    cout << "Bitte eine Zahl größer 0 angeben" << endl;
  }
}

// Resize array
char** resize(char* c[], int dimNew)
{
  // Check for dimNew lower 1
  if (dimNew < 1)
  {
    cout << "Bitte eine Zahl größer 0 angeben" << endl;
    return c;
  }
  // Check if dimNew is too small
  else if (dimNew < count)
  {
    cout << "Warteschlange enthält mehr Einträge" << endl;
    cout << "als das neue Feld fassen kann" << endl;
    return c;
  }
  // Check if dimNew is the same
  else if (dimNew == count)
  {
    return c;
  }
  else
  {
    // Create new array of given size
    char** result = new char*[dimNew];
    int j = 0;

    // Copy old strings
    for (int i = 0; i < dim; ++i)
    {
      if (c[(i + posremove) % dim] != 0)
      {
        result[j] = c[(i + posremove) % dim];
        ++j;
      }
    }

    // Reset variables
    posremove = 0;
    posinsert = j;
    dim = dimNew;

    // Set empty array
    for (j; j < dim; ++j)
    {
      result[j] = 0;
    }

    // Delete old array
    delete [] c;
    return result;
  }
}

// Clean stdin
void flush()
{
  int i;
  while((i = getchar()) != EOF && i != '\n');
}
