// Aufgabe 2

#include <iostream>
#include <stdlib.h>

using namespace std;

// Rekursive Berechnung von Fibonacci
int fibo(int n)
{
  if (n < 2)
  {
    return n;
  }
  else
  {
    return fibo(n - 1) + fibo(n - 2);
  }
}

int main(int argc, char *argv[])
{
  // prüfen ob anzahl der Parameter stimmt
  if (argc != 2)
  {
    cout << "Calculates the n fibonacci number." << endl;
    cout << "Using:" << endl;
    cout << "./Excercise2Main <n>" << endl;
  }
  else
  {
    cout << "n. fibonacci:" << endl;
    cout << fibo(atoi(argv[1])) << endl;
  }
}

// Getestet:
// Parameteranzahl != 1
// 0
// 1
// 3
// 10
