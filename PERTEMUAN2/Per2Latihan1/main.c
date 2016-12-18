#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int sisi;
  int volume;
  
  sisi = 10;
  volume = sisi * sisi * sisi;
  
  printf("Volume Kubus = Sisi x Sisi x Sisi \n V = %i x %i x %i = %i \n", sisi, sisi, sisi, volume);
  
  system("PAUSE");	
  return 0;
}
