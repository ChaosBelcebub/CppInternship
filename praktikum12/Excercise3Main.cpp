// Aufgabe 3

#include <iostream>

typedef unsigned char byte;
short int transform(short int i);

int main()
{
  std::cout << std::hex << transform(0x11223344) << std::endl;
  return 0;
}

// Umwandlung via Little Endian.
// Bsp case 2:
//            Byte an der stelle 1 wird übernommen
//            Byte an der stelle 0 wird mit 265 multipliziert
//            (shift 8)
short int transform(short int i)
{
  short int maske = 0xff, merke = i;
  switch (sizeof(short int))
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
