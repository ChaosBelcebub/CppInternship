// Aufgabe 3
// Software zur Unterstützung von Wohnungsverwaltung

#include <iostream>
using namespace std;

// Struktur einer Wohnung
struct Whg
{
  int z; // Anzahl der Zimmer
  bool f; // Ist Wohnung frei?
  float q; // Quadratmeter Wohnfläche
};

// Gibt den Status der Wohnung zurück
bool istFrei(Whg x)
{
  return x.f;
}

// Setzt den Status auf Belegt
void setzeBelegt(Whg &x)
{
  x.f = false;
}

// Setzt den Status auf frei
void setzeFrei(Whg *x)
{
  (*x).f = true;
}

// Gibt freie Wohnung mit gegebener Anzahl Zimmer zurück fals
// vorhanden
Whg sucheFreieWhg(Whg f[], int dim, int anzZimmer)
{
  Whg result;
  result.z = 0;
  result.f = true;
  result.q = 0.0f;

  for (int i = 0; i < dim; i++)
  {
    if (f[i].f && f[i].z == anzZimmer && f[i].q > result.q)
    {
      result = f[i];
    }
  }

  return result;
}

// Gibt eine neue Wohnung zurück
Whg neueWhg(int zimmer, float qm)
{
  Whg neu;

  neu.z = zimmer;
  neu.f = true;
  neu.q = qm;

  return neu;
}

// Prüft ob Wohnung 1 größer als Wohnung 2
bool istGroesser(Whg *x1, Whg *x2)
{
  return (*x1).q > (*x2).q;
}

// Prüft ob Wohnung 1 größer als Wohnung 2
bool istGroesser(Whg &x1, Whg &x2)
{
  return x1.q > x2.q;
}

// Main zum Demonstrieren
int main()
{
  Whg wohnungen[10];
  cout << "Demonstration:" << endl;
  cout << "...initialisierung..." << endl;
  
  for (int i = 0; i < 10; i++)
  {
    wohnungen[i] = neueWhg((i % 5) + 1, 10 + (i * 1.3));
  }

  cout << "10 Wohnungen initialisiert." << endl;

  cout << "...Setze alle Wohnungen als Belegt..." << endl;

  for (int i = 0; i < 10; i++)
  {
    setzeBelegt(wohnungen[i]);
    cout << "Wohnung " << i << ": " << wohnungen[i].f << endl;
  }

  cout << "...Setze die ersten 7  Wohnungen als Frei..." << endl;

  for (int i = 0; i < 7; i++)
  {
    wohnungen[i].f = true;
  }

  cout << "...Prüfen des Status mittels istFrei(Whg x)..." << endl;

  for (int i = 0; i < 10; i++)
  {
    cout << "Wohnung " << i << ": " << istFrei(wohnungen[i]) << endl;
  }

  cout << "Suche Freie Wohnung mit 8 Zimmern:" << endl;
  Whg result = sucheFreieWhg(wohnungen, 10, 1);
  cout << "Zimmeranzahl: " << result.z << endl;
  cout << "Wohnfläche: " << result.q << endl;

  cout << "Suche Freue Wohnung mit 4 Zimmern:" << endl;
  result = sucheFreieWhg(wohnungen, 10, 4);
  cout << "Zimmeranzahl: " << result.z << endl;
  cout << "Wohnfläche: " << result.q << endl;

  cout << "...Prüfen ob Wohnung 0 größer ist als 9..." << endl;
  cout << istGroesser(&wohnungen[0], &wohnungen[9]) << endl;
  cout << "...Prüfen ob Wohnung 9 größer als 0..." << endl;
  cout << istGroesser(wohnungen[9], wohnungen[0]) << endl;
}
