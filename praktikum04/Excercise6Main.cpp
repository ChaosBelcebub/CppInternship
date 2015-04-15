// Aufgabe 6

#include <iostream>
using namespace std;

int main()
{
  int min;
  int max;

  // Einlesen der Grenzen
  cout << "Primzahlgenerator! Bitte Minimum eingeben: ";
  cin >> min;
  cout << "Bitte Maximum eingeben: ";
  cin >> max;
  cout << "Primzahlen von " << min << " bis ";
  cout << max << ":" << endl;

  // Fals Eingabe negativ Grenzen auf 0 setzen
  if (min < 0)
  {
    min = 0;
  }
  else if (max < 0)
  {
    max = 0;
  }
  // Berechnung
  for (int i = min; i < max; ++i)
  {
    // Wenn i kleiner 2 dann keine Primzahl
    if (i < 2)
    {
      continue;
    }

    bool isPrime = true;
    // Prüfen ob die Zahl durch andere Zahlen teilbar ist
    for (int j = 2; isPrime && j < i; ++j)
    {
      // Damit die Zahl nicht durch sich selbst geteilt wird
      if (i != j)
      {
        // Bsp: Ist 3 eine Primzahl?
        // 3 % 2 = 1
        // (bool)(1) = true
        isPrime = (bool)(i % j);
      }
    }
    
    // Ausgabe wenn Primzahl
    if (isPrime)
    {
      cout << i << " ";
    }
  }

  cout << endl;
}

// Getestet wurde:
// Primzahlen von 10 bis 5: Keine Primzahlen
// Primzahlen von 0 bis 10: Korrekte Ausgabe
// Primzahlen von 0 bis 100: Korrekte Ausgabe
// Primzahlen von -5 bis -10: Keine Ausgabe
