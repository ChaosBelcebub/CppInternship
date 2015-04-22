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
  anz_vokale(s);
}

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
  cout << a << " x 'a'" << endl;
  cout << e << " x 'e'" << endl;
  cout << i << " x 'i'" << endl;
  cout << o << " x 'o'" << endl;
  cout << u << " x 'u'" << endl;
  return 0;
}
