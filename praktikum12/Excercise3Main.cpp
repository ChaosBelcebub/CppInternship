// Aufgabe 3

#include <iostream>

typedef unsigned char byte;
int transform(int i);

int main()
{
  std::cout << std::hex << transform(0x11223344);
  return 0;
}

int transform(int i)
{
  int maske = 0xff, merke = 1;
  switch (sizeof(int))
  {
    case 2:
      *((byte *) &i + 1) = (byte) maske & merke;
      *((byte *) &i) = (byte) maske & (merke >> 8);
      break;
    case 4:
     *((byte *) &i + 3) = (byte) maske & merke; 
     *((byte *) &i + 2) = (byte) maske & (merke >> 8);
     *((byte *) &i + 1) = (byte) maske & (merke >> 16);
     *((byte *) &i) = (byte) maske & (merke >> 24);
     break;
   default:
     std::cerr << "Fehler, integer Format nicht unterstützt!";
     exit(1);
  }
  return i;
}
