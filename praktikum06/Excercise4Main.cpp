//Aufgabe 4

#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{
  // Variablen
  char read[100] = { 0 };
  int a = 0, e = 0, i = 0, o = 0, u = 0;

  // Einlesen
  cout << "Bitte Zeichenkette eingeben:" << endl;
  cin >> read;
 
  // Iterieren über den string
  // Hochzählen wenn Treffer
  for (int j = 0; j < 100; ++j)
  {
    switch (read[j])
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

  // Ausgabe
  cout << a << " x 'a'" << endl;
  cout << e << " x 'e'" << endl;
  cout << i << " x 'i'" << endl;
  cout << o << " x 'o'" << endl;
  cout << u << " x 'u'" << endl;
  
  // Ceasar Verschlüsselung
  for (int j = 0; j < 100; ++j)
  {
    switch (read[j])
    {
      case 0:
        j = 100;
        break;
      case 'z':
        read[j] = 'a';
        break;
      default:
        read[j] += 1;
        break;
    }
  }

  // Ausgabe
  cout << "Verschlüsselter String:" << endl;
  cout << read << endl;

  // Caesar Entschlüsselung
  for (int j = 0; j < 100; ++j)
  {
    switch (read[j])
    {
      case 0:
        j = 100;
        break;
      case 'a':
        read[j] = 'z';
        break;
      default:
        read[j] -= 1;
        break;
    }
  }

  // Ausgabe
  cout << "Entschlüsselter String:" << endl;
  cout << read << endl;

  // Eigene Verschlüsselung
  for (int j = 0; j < 100; ++j)
  {
    switch (read[j])
    {
      case 0:
        j = 100;
        break;
      case 'a':
        read[j] = '@';
        break;
      case 'e':
        read[j] = '3';
        break;
      case 's':
        read[j] = '5';
        break;
    }
  }

  // Ausgabe
  cout << "Meine Verschlüsselung:" << endl;
  cout << read << endl;

  // Eigene Entschlüsselung
  for (int j = 0; j < 100; ++j)
  {
    switch (read[j])
    {
      case 0:
        j = 100;
        break;
      case '@':
        read[j] = 'a';
        break;
      case '3':
        read[j] = 'e';
        break;
      case '5':
        read[j] = 's';
        break;
    }
  }

  // Ausgabe
  cout << "Meine Entschlüsselung:" << endl;
  cout << read << endl;
}
