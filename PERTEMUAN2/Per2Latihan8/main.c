#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int alas;
  int tinggi;
  int luas;
  
  alas = 4;
  tinggi = 10;
  luas = (alas * tinggi) / 2;
  
  printf("Luas Segitiga = 1/2 x Alas x Tinggi \n L = 1/2 x %i x %i = %i \n", alas, tinggi, luas);
   
  system("PAUSE");	
  return 0;
}
