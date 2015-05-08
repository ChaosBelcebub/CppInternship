// Aufgabe 1

#include <iostream>

using namespace std;

void menu();
void add(char* c);
void del();
void print(char* c[], int dim);
void count(char* c[], int dim);
char* init(int dim);


int main()
{

}

void menu()
{
  cout << " # a - Warteschlange Ausgeben" << endl;
  cout << " # b - Beenden" << endl;
  cout << " # e - Eingeben" << endl;
  cout << " # i - Initialisieren" << endl;
  cout << " # l - Löschen" << endl;
  cout << " # z - Anzahl ausgeben" << endl;
}
