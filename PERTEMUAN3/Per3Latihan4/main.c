#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int panjang;
  int lebar;
  int luas;
  
  printf("Masukan Panjang = ");
  scanf("%i", &panjang);
  printf("Masukan Lebar = ");
  scanf("%i", &lebar);
  
  luas = panjang * lebar;
  
  printf("Luas Persegi Panjang = Panjang x Lebar \nLuas Persegi Panjang = %i x %i = %i \n", panjang, lebar, luas);
  
  system("PAUSE");	
  return 0;
}
