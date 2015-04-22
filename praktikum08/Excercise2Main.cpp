// Aufgabe 2

#include <iostream>
#include <cmath>
using namespace std;

double func(int count);
double func(double epsilon);

int main()
{
  int count;
  double epsilon;
  cout << "Bitte Anzahl der Summen angeben:" << endl;
  cin >> count;
  cout.precision(15);
  cout << func(count) << endl;

  cout << "Bitte Genauigkeit angeben:" << endl;
  cin >> epsilon;
  cout.precision(15);
  cout << func(epsilon) << endl;
}

double func(int count)
{
  double result = 0.0;
  for (double i = 1.0; i <= count; ++i)
  {
    result += pow((0.5), i);
  }
  return result;
}

double func(double epsilon)
{
  double result = 0.0;
  double i = 1.0;
  while (result < epsilon)
  {
    result += pow((0.5), i);
    ++i;
  }
  return result;
}
