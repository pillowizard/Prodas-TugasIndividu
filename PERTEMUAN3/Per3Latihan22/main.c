#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int lalas;
  int tinggi;
  float volume;
  
  printf("Masukan Luas Alas = ");
  scanf("%i", &lalas);
  printf("Masukan Tinggi = ");
  scanf("%i", &tinggi);
  
  volume = 0.33 * lalas * tinggi;
  
  printf("Volume Limas Segiempat = 1/3 x Luas Alas x Tinggi \nVolume Limas Segiempat = 1/3 x %i x %i = %.2f \n", lalas, tinggi, volume);
  
  system("PAUSE");	
  return 0;
}
