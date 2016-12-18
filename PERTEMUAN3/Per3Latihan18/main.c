#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int sisi;
  int volume;
  
  printf("Masukan Sisi = ");
  scanf("%i", &sisi);
  
  volume = sisi * sisi * sisi;
  
  printf("Volume Kubus = Sisi x Sisi x Sisi \nVolume Kubus = %i x %i x %i = %i \n", sisi, sisi, sisi, volume);
  system("PAUSE");	
  return 0;
}
