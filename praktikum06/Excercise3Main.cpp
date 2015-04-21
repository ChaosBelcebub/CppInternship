//Aufgabe 3

#include <iostream>
#include <stdlib.h>
using namespace std;

string crypt(string s);
string crypt2(string s);
string decrypt(string s);
string decrypt2(string s);

int main()
{
  // Variablen
  string read;
  int a = 0, e = 0, i = 0, o = 0, u = 0;

  // String einlesen
  cout << "Bitte Zeichenkette eingeben:" << endl;
  getline(cin, read);
 
  // Iterieren über einzelne chars
  // Hochzählen bei Treffer
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

  // Ausgaben
  cout << a << " x 'a'" << endl;
  cout << e << " x 'e'" << endl;
  cout << i << " x 'i'" << endl;
  cout << o << " x 'o'" << endl;
  cout << u << " x 'u'" << endl;
  cout << "Verschlüsselter String:" << endl;
  cout << crypt(read) << endl;
  cout << "Entschlüsselter String:" << endl;
  cout << decrypt(crypt(read)) << endl;
  cout << "Meine Verschlüsselung:" << endl;
  cout << crypt2(read) << endl;
  cout << "Meine Entschlüsselung:" << endl;
  cout << decrypt2(crypt2(read)) << endl;
}

// Verschlüsselt den string nach Caesar Verschlüsselung
string crypt(string s)
{
  int i = 0;
  for (auto c: s)
  {
    if (c == 'z')
    {
      s[i] = 'a';
    }
    if (c == ' ')
    {
      s[i] == ' ';
    }
    else
    {
      s[i] = c + 1;
    }
    ++i;
  }

  return s;
}

// Entschlüsselt Caesar Verschlüsselung
string decrypt(string s)
{
  int i = 0;
  for (auto c: s)
  {
    if (c == 'a')
    {
      s[i] = 'z';
    }
    if (c == ' ')
    {
      s[i] = ' ';
    }
    else
    {
      s[i] = c - 1;
    }
    ++i;
  }
  return s;
}

// Eigene Verschlüsselung
string crypt2(string s)
{
  int i = 0;
  for (auto c: s)
  {
    if (c == 'a')
    {
      s[i] = '@';
    }
    else if (c == 'e')
    {
      s[i] = '3';
    }
    else if (c == 's')
    {
      s[i] = '5';
    }
    ++i;
  }
  return s;
}

// Eigene Entschlüsselung
string decrypt2(string s)
{
  int i = 0;
  for (auto c: s)
  {
    if (c == '@')
    {
      s[i] = 'a';
    }
    else if (c == '3')
    {
      s[i] = 'e';
    }
    else if (c == '5')
    {
      s[i] = 's';
    }
    ++i;
  }
  return s;
}
