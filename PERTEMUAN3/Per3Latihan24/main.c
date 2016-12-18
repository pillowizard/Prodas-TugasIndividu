#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  float lalas;
  int tinggi;
  float volume;
  
  printf("Masukan Luas Alas = ");
  scanf("%f", &lalas);
  printf("Masukan Tinggi = ");
  scanf("%i", &tinggi);
  
  volume = 1.67 * lalas * tinggi;
  
  printf("Volume Limas Segitiga = 1/6 x Luas Alas x Tinggi \nVolume Limas Segitiga = 1/6 x %.2f x %i = %.2f \n", lalas, tinggi, volume);
  
  system("PAUSE");	
  return 0;
}
