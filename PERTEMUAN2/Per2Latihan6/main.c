#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int panjang;
  int lebar;
  int keliling;
  
  panjang = 10;
  lebar = 6;
  keliling = 2 * (panjang + lebar);
  
  printf("Keliling Persegi Panjang = 2 x (Panjang + Lebar) \n K = 2 x (%i + %i) = %i \n", panjang, lebar, keliling);
  
  system("PAUSE");	
  return 0;
}
