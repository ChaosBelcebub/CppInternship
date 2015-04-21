// Aufgabe 2.2

#include <iostream>
using namespace std;

int main()
{
  char s[100] = { };
  
  cout << "Bitte  C-String eingeben:" << endl;
  cin >> s;

  for (int i = 0; i < 100; ++i)
  {
    if (*(s+i) > 96 && *(s+i) < 123)
    {
      *(s+i) -= 32;
    }
  }

  cout << s << endl;
}
