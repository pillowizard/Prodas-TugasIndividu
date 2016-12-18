#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int potensial;
  int kinetik;
  int mekanik;
  
  potensial = 200;
  kinetik = 100;
  mekanik = potensial + kinetik;
  
  printf("Energi Mekanik = Energi Potensial + Energi Kinetik \n EM = %i + %i = %i joule \n", potensial, kinetik, mekanik);
  system("PAUSE");	
  return 0;
}
