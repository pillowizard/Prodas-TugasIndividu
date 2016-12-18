#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int sisi;
  int luas;
  
  printf("Masukan Sisi = ");
  scanf("%i", &sisi);
  
  luas = sisi * sisi;
  
  printf("Luas Persegi = Sisi x Sisi \nLuas Persegi = %i x %i = %i \n", sisi, sisi, luas);
  system("PAUSE");	
  return 0;
}
