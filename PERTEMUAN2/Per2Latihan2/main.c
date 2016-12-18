#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int panjang;
  int lebar;
  int tinggi;
  int volume;
  
  panjang = 10;
  lebar = 4;
  tinggi = 6;
  volume = panjang * lebar * tinggi;
  
  printf("Volume Balok = Panjang x Lebar x Tinggi \n V = %i x %i x %i = %i \n", panjang, lebar, tinggi, volume);
  
  system("PAUSE");	
  return 0;
}
