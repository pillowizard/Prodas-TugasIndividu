#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int massa;
  int kecepatan;
  int kinetik;
  
  massa = 40;
  kecepatan = 10;
  kinetik = (massa * kecepatan * kecepatan) / 2;
  
  printf("Energi Kinetik = 1/2 x m x v^2 \n Ek = 1/2 x %i x %i^2 = %i joule \n", massa, kecepatan, kinetik);
  system("PAUSE");	
  return 0;
}
