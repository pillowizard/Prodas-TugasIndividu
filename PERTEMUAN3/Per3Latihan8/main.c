#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int alas;
  int atas;
  int tinggi;
  float luas;
  
  printf("Masukan Sisi Alas = ");
  scanf("%i", &alas);
  printf("Masukan Sisi Atas = ");
  scanf("%i", &atas);
  printf("Masukan Tinggi = ");
  scanf("%i", &tinggi);
  
  luas = (alas + atas) * tinggi * 0.5;
  
  printf("Luas Trapesium = (Sisi Alas + Sisi Atas) x Tinggi / 2 \nLuas Trapesium = (%i + %i) x %i / 2 = %.2f \n", alas, atas, tinggi, luas);
  
  system("PAUSE");	
  return 0;
}
