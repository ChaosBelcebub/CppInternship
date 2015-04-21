// Aufgabe 1

#include <iostream>
using namespace std;

int main()
{
  int dim = 5;
  int field[5] = { };

  for (int i = 0; i < dim; ++i)
  {
    field[i] = i;
  }

  int tmp = *(field+0);
  for (int i = dim - 1; i >= 0; --i)
  {
    *(field+((i+1)%dim)) = *(field+i);
  }
  *(field+1) = tmp;
  
  for (int i = 0; i < dim; ++i)
  {
    cout << *(field+i) << " ";
  }
  cout << endl;
}
