#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int panjang;
  int lebar;
  int luas;
  
  panjang = 10;
  lebar = 6;
  luas = panjang * lebar;
  
  printf("Luas Persegi Panjang = Panjang x Lebar \n L = %i x %i = %i \n", panjang, lebar, luas);
  
  system("PAUSE");	
  return 0;
}
