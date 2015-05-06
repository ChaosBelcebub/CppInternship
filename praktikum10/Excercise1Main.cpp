// Aufgabe 1

#include <iostream>
using namespace std;

struct myStruct
{
  char c;
  int i;
  float f;
  string s;
};

void print(myStruct s1)
{
  cout << "char: " << s1.c << endl;
  cout << "int: " << s1.i << endl;
  cout << "float: " << s1.f << endl;
  cout << "string: " << s1.s << endl;
}

int main()
{
  myStruct s1;
  s1.c = 'a';
  s1.i = 42;
  s1.f = 4.2f;
  s1.s = "42";

  print(s1);
}
