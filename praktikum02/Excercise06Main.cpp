// Excercise 6

/* 1)
 * d = 33.33334
 * f = 33.3334
 * l = 33
 * i = 33
 *
 * Typumwandlung entstehen bei der Zuweisung von d nach f
 * und von f nach l.
 *
 * 2)
 * d = 33.33334
 * f = 33.3334
 * l = 33
 * i = 33
 *
 * Die Änderung von 3 zu 3.0 macht keinen Unterschied in der
 * Umwandlung des Typs, da eine Geteilt-Operation immer den gleichen
 * Typ zurückgibt.
 *
 * d = 33.33334
 * f = 33.3334
 * l = 33
 * i = 33
 *
 * Typumwandlungen sind geblieben.
 *
 * 3)
 * d = 33.33334
 * f = 33.3334
 * l = 33
 * i = 33
 *
 * Erneut macht die Änderung von 100 zu (float)100 keinen Unterschied
 *
 * Typumwandlung sind geblieben, dazu kommt eine Umwandlung von int
 * zu float bei (float)100 vor der berechnung
 */

#include <iostream>
using namespace std;

int main()
{
  double d;
  float f;
  long l;
  int i;

  cout << "Aufgabe 1:" << endl;
  d = 100/3;
  f = d;
  l = f;
  i = l;
  cout << "double: " << d << endl;
  cout << "float: " << f << endl;
  cout << "long: " << l << endl;
  cout << "int: " << i << endl;
  cout << endl;

  cout << "Aufgabe 2:" << endl;
  d = 100/3.0;
  f = d;
  l = f;
  i = l;
  cout << "double: " << d << endl;
  cout << "float: " << f << endl;
  cout << "long: " << l << endl;
  cout << "int: " << i << endl;
  cout << endl;

  cout << "Aufgabe 3:" << endl;
  d = (float)100/3;
  f = d;
  l = f;
  i = l;
  cout << "double: " << d << endl;
  cout << "float: " << f << endl;
  cout << "long: " << l << endl;
  cout << "int: " << i << endl;
  cout << endl;
}

/* Genauigkeitsverluste enstehen bei Umwandlung von Double zu Float
 * und von Float zu Double. Double und int haben in unserem Fall
 * keinen Verlust der Genauigkeit weil diese nicht lang genug sind.
 * Selbst mit der flag -Wall gibt der Compiler keine Fehlermeldungen
 * aus.
 */
