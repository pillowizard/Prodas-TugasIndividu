#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int alas;
  int sisi_miring;
  int keliling;
  
  alas = 10;
  sisi_miring = 5;
  keliling = 2 * (alas + sisi_miring);
  
  printf("Keliling Jajar Genjang = 2 x (Alas + Sisi Miring) \n K = 2 x (%i + %i) = %i \n", alas, sisi_miring, keliling);
  system("PAUSE");	
  return 0;
}
