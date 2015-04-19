//Aufgabe 3

#include <iostream>
#include <stdlib.h>
using namespace std;

string crypt(string s);

int main()
{
  string read;
  int a = 0, e = 0, i = 0, o = 0, u = 0;

  cout << "Bitte Zeichenkette eingeben:" << endl;
  getline(cin, read);
 
  for (auto c: read)
  {
    switch (c)
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
    }
  }

  cout << a << " x 'a'" << endl;
  cout << e << " x 'e'" << endl;
  cout << i << " x 'i'" << endl;
  cout << o << " x 'o'" << endl;
  cout << u << " x 'u'" << endl;
  cout << "Verschlüsselter String:" << endl;
  cout << crypt(read) << endl;
}

string crypt(string s)
{
  char crypt[100] = { };
  int i = 0;
  for (auto c: s)
  {
    crypt[i] = c;
    ++i;
    if (i > 99)
    {
      break;
    }
  }
  return s = crypt;
}
