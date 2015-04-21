// Aufgabe 2.4

#include <iostream>
using namespace std;

int main()
{
  char s[100] = { };
  char tmp;
  int size = 0;

  cout << "Bitte C-String eingeben:" << endl;
  cin >> s;

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

  *(s+1) = tmp;
  cout << s << endl;
}
