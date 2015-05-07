// Aufgabe 2

#include <iostream>
using namespace std;

int main()
{
  // Init
  char c = 1;
  int pos = 8;
  cout << "Bitte Charakter eingeben:" << endl;
  cin >> c;
  // Cast
  int i = c;
 
  // Loop
  while (pos > 0)
  {
    // Höchstwertiges Bit auslesen
    int result = i & 128;
    // Ausgabe
    if (result != 0)
    {
      cout << 1;
    }
    else
    {
      cout << 0;
    }
    // Bitshift links
    i = i << 1;
    --pos;
  }
  cout << endl;
}
