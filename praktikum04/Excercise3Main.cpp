// Aufgabe 3

#include <iostream>
using namespace std;

int main()
{
  int num1 = 0;
  int num2 = 1;
  int num_next = 1;

  cout << "Ersten 20 Stellen der Fibonacci Folge:" << endl;
  cout << "0 ";
  
  for (int i = 0; i < 19; ++i)
  {
    cout << num_next << " ";
    num_next = num1 + num2;
    num1 = num2;
    num2 = num_next;
  }

  cout << endl;
}
