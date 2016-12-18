#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int panjang;
  int lebar;
  int keliling;
  
  printf("Masukan Panjang = ");
  scanf("%i", &panjang);
  printf("Masukan Lebar = ");
  scanf("%i", &lebar);
  
  keliling = 2 * (panjang + lebar);
  
  printf("Keliling Persegi Panjang = 2 x (Panjang + Lebar) \nKeliling Persegi Panjang = 2 x (%i + %i) = %i \n", panjang, lebar, keliling);
  
  system("PAUSE");	
  return 0;
}
