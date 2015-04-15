// Aufgabe 6
//
// ---------------------------------------
// ACHTUNG: VOLLKOMMEN UNNÖTIG LANGER CODE
// ---------------------------------------
//

#include <iostream>

using namespace std;

int main()
{
  double num1, num2, diff;

  int fh = 0;
  int th = 0;
  int oh = 0;
  int fi = 0;
  int tw = 0;
  int t = 0;
  int f = 0;
  int two = 0;
  int one = 0;
  int fic = 0;
  int twc = 0;
  int tc = 0;
  int fc = 0;
  int toc = 0;
  int oc = 0;

  cout << "Bitte Kaufbetrag angeben: ";
  cin >> num1;
  cout << "Bitte Geldbetrag angeben: ";
  cin >> num2;
  diff = num2 - num1;

  if (diff < 0.0)
  {
    cout << "Geldbetrag zu gering, es Fehlen ";
    cout << diff * -1 << " €." << endl;
    return 0;
  }
  else if (diff == 0.0)
  {
    cout << "Kein Rückgeld." << endl;
    return 0;
  }

  cout << "Rückgeld: " << diff << " €." << endl;
  
  while (diff > 0.01)
  {
    if (diff - 500 >= 0)
    {
      diff -= 500;
      ++fh;
    }
    else if (diff - 200 >= 0)
    {
      diff -= 200;
      ++th;
    }
    else if (diff - 100 >= 0)
    {
      diff -= 100;
      ++oh;
    }
    else if (diff - 50 >= 0)
    {
      diff -= 50;
      ++fi;
    }
    else if (diff - 20 >= 0)
    {
      diff -= 20;
      ++tw;
    }
    else if (diff - 10 >= 0)
    {
      diff -= 10;
      ++t;
    }
    else if (diff - 5 >= 0)
    {
      diff -= 5;
      ++f;
    }
    else if (diff - 2 >= 0)
    {
      diff -= 2;
      ++two;
    }
    else if (diff - 1 >= 0)
    {
      diff -= 1;
      ++one;
    }
    else if (diff - 0.5 >= 0)
    {
      diff -= 0.5;
      ++fic;
    }
    else if (diff - 0.2 >= 0)
    {
      diff -= 0.2;
      ++twc;
    }
    else if (diff - 0.1 >= 0)
    {
      diff -= 0.1;
      ++tc;
    }
    else if (diff - 0.05 >= 0)
    {
      diff -= 0.05;
      ++fc;
    }
    else if (diff - 0.02 >= 0)
    {
      diff -= 0.02;
      ++toc;
    }
    else if (diff - 0.01 >= 0)
    {
      diff -= 0.01;
      ++oc;
    }
  }

  cout << "Stückelung:" << endl;
  cout << "-----------" << endl;
  cout << fh << " x 500 €" << endl;
  cout << th << " x 200 €" << endl;
  cout << oh << " x 100 €" << endl;
  cout << fi << " x 50 €" << endl;
  cout << tw << " x 20 €" << endl;
  cout << t << " x 10 €" << endl;
  cout << f << " x 5 €" << endl;
  cout << two << " x 2 €" << endl;
  cout << one << " x 1 €" << endl;
  cout << fic << " x 50 Cent" << endl;
  cout << twc << " x 20 Cent" << endl;
  cout << tc << " x 10 Cent" << endl;
  cout << fc << " x 5 Cent" << endl;
  cout << toc << " x 2 Cent" << endl;
  cout << oc << " x 1 Cent" << endl;
}

// Getestet mit:
// Kaufbetrag 200 und Geldbetrag 200: Kein Rückgeld
// 200.00 und 200.00: Kein Rückgeld
// 20 und 18: Es fehlen 2 Euro
// 19.99 und 50: Korrekte Ausgabe
// 148.79 und 1000: Korrekte Ausgabe
// 456.75 und 782.43: Korrekte Ausgabe
