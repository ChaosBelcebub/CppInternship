// Aufgabe 5

#include <iostream>
using namespace std;

int countLegs(int g, int k, int h, int s);

int main()
{
  int maxCount = 45;

  for (int i = 0; (i * 2) <= maxCount; ++i)
  {
    for (int j = 0; (j * 3) <= maxCount; ++j)
    {
      if (countLegs(i * 2, j * 3, i, j) == 90)
      {
        cout << "Lösung: " << i * 2 << " Gänse; ";
        cout << j * 3 << " Kaninchen; ";
        cout << i << " Hühner und ";
        cout << j << " Schafe." << endl;
        return 0;
      }
    }
  }
}

int countLegs(int g, int k, int h, int s)
{
  return (g * 2) + (k * 4) + (h * 2) + (s * 4);
}
