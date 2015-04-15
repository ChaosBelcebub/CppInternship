// Michael Kotzjan
// HFU 01.04.2015

#include <iostream>
using namespace std;

// Prototypen
void funk1();

int main()
{
  funk1();
  cout << "Gute! ";
  funk1();
  cout << "klar! ";
  funk1();
  cout << "Logo!";
}

/* Nicht erlaubte Funktionsnamen sind z.B. Zahlen oder bereits vergeben
 * Namen wie 1var, switch usw.
*/

void funk1()
{
  cout << "Alles ";
}
