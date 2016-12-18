#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int panjang;
  int lebar;
  int tinggi;
  int volume;
  
  printf("Masukan Panjang = ");
  scanf("%i", &panjang);
  printf("Masukan Lebar = ");
  scanf("%i", &lebar);
  printf("Masukan Tinggi = ");
  scanf("%i", &tinggi);
  
  volume = panjang * lebar * tinggi;
  
  printf("Volume Balok = Panjang x Lebar x Tinggi \nVolume Balok = %i x %i x %i = %i \n", panjang, lebar, tinggi, volume);
  system("PAUSE");	
  return 0;
}
