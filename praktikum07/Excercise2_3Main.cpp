// Aufgabe 2.3

#include <iostream>
using namespace std;

int main()
{
  char c[100] = { };
  int d = 1;
  int result = 0;
  cout << "Bitte Ganzzahl eingeben:" << endl;
  cin >> c;
  
  for (int i = 99; i >= 0; --i)
  {
    if (*(c+i) != 0)
    {
      if (*(c+i) < 58 && *(c+i) > 47)
      {
        result += d * ((int)*(c+i) - 48);
        d *= 10;
      }
      else if (i == 0 && *(c+i) == 45)
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
  cout << "Integer lautet: " << result << endl;
}
