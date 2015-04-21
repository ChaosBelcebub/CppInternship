// Aufgabe 2.3

#include <iostream>
using namespace std;

int main()
{
  char c[100] = { };
  int d = 1;
  cout << "Bitte Ganzzahl eingeben:" << endl;
  cin >> c;
  
  for (int i = 99; i >= 0; --i)
  {
    if (*(c+i) != 0)
    {
      if (*(c+i) < 58 && *(c+i) > 47)
      {
        
      }
      else if (i == 0 && *(c+i) == 45)
      {

      }
      else
      {
        cout << "Ganzzahl enthält regelwidrige Zeichen!" << endl;
        return 0;
      }
    }
  }
}
