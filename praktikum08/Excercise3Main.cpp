// Aufgabe 3

#include <iostream>
using namespace std;

int anz_vokale(char *s);
void to_upper(char *s);
long int my_toint(char *s);
void my_rotate(char *s);

int main()
{
  char s[100] = { };
  cout << "C-String eingeben:" << endl;
  cin >> s;
  // Aufrufen der einzelnen Funktionen
  cout << anz_vokale(s) << endl;
  to_upper(s);
  cout << my_toint(s) << endl;
  my_rotate(s);
}

// Ausgeben der Anzahl der Vokale wie Aufgabe 3 Blatt 6
int anz_vokale(char *s)
{
  bool run = true;
  int a = 0, e = 0, i = 0, o = 0, u = 0, j = 0;
  while (run)
  {
    switch (*(s+j))
    {
      case 'a':
        ++a;
        break;
      case 'e':
        ++e;
        break;
      case 'i':
        ++i;
        break;
      case 'o':
        ++o;
        break;
      case 'u':
        ++u;
        break;
      case 0:
        run = false;
        break;
    }
    ++j;
  }

  return a + e + i + o + u;
}

// Ausgabe des String in Uppercase wie Aufgabe 2 Blatt 7
void to_upper(char *s)
{
  bool run = true;
  int i = 0;

  while(run)
  {
    if (*(s+i) > 96 && *(s+i) < 123)
    {
      *(s+i) -= 32;
    }
    else if (*(s+i) == 0)
    {
      run = false;
    }
    ++i;
  }

  cout << s << endl;
}

// Ausgabe eines Integers aus einem String wie Aufgabe 2 Blatt 7
long int my_toint(char *s)
{
  int result = 0;
  int d = 1;
  for (int i = 99; i >= 0; --i)
  {
    if (*(s+i) != 0)
    {
      if (*(s+i) < 58 && *(s+i) > 47)
      {
        result += d * ((int)*(s+i) - 48);
        d *= 10;
      }
      else if (i == 0 && *(s+i) == 45)
      {
        continue;
      }
      else
      {
        cout << "Ganzzahl enthält regelwidrige Zeichen!" << endl;
        return 0;
      }
    }
  }
  return result;
}

// Ausgabe des Rotierten array wie Aufgabe 2 Blatt 7
void my_rotate(char *s)
{
  char tmp;
  int size = 0;

  tmp = *(s+0);

  for (int i = 99; i >= 0; --i)
  {
    if (*(s+i) != 0 && *(s+(i + 1)) == 0)
    {
      size = i + 1;
    }
    
    if (*(s+i) != 0)
    {
      *(s+((i + 1) % size)) = *(s+i);
    }
  }

  if (size > 1)
  {
    *(s+1) = tmp;
  }
  cout << s << endl;
}
