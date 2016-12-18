#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int alas;
  int tinggi;
  float luas;
  
  printf("Masukan Alas = ");
  scanf("%i", &alas);
  printf("Masukan Tinggi = ");
  scanf("%i", &tinggi);
  
  luas = 0.5 * alas * tinggi;
  
  printf("Luas Segitiga = 1/2 x Alas x Tinggi \nLuas Segitiga = 1/2 x %i x %i = %.2f \n", alas, tinggi, luas);
  
  system("PAUSE");	
  return 0;
}
