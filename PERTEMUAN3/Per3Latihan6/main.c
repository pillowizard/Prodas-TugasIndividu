#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int alas;
  int tinggi;
  int luas;
  
  printf("Masukan Alas = ");
  scanf("%i", &alas);
  printf("Masukan Tinggi = ");
  scanf("%i", &tinggi);
  
  luas = alas * tinggi;
  
  printf("Luas Jajaran Genjang = Alas x Tinggi \nLuas Jajaran Genjang = %i x %i = %i \n", alas, tinggi, luas);
  
  system("PAUSE");	
  return 0;
}
