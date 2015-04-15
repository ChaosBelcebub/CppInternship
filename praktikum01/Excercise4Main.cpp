// Michael Kotzjan
// HFU 01.04.15

#include <iostream>
using namespace std;

int main()
{
  int i = 9;
  do
  {
    cout << i << "/";
    i--;
    cout << "(" << i << ")";
  } while (i > 0);
  cout << '\n';
}
