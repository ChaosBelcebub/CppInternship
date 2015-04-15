// Aufgabe 2

#include <iostream>
using namespace std;

int main()
{
  int prim[1000] = {};
  int count = 0;
  int num = 2;
  bool isprim;

  prim[count] = num;
  ++count;

  while (count < 1000)
  {
    ++num;
    isprim = true;
    for (int i = 0; i < count; ++i)
    {
      if (num % prim[i] == 0)
      {
        isprim = false;
        break;
      }
    }

    if (isprim)
    {
      prim[count] = num;
      ++count;
    }
  }
  cout << "1000. Primzahl ist " << prim[count - 1] << endl;
}
