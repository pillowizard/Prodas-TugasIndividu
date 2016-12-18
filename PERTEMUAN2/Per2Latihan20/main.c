#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int tegangan;
  int kuat_arus;
  int daya;
  
  tegangan = 220;
  kuat_arus = 3;
  daya = tegangan * kuat_arus;
  
  printf("Daya Listrik = Tegangan x Kuat Arus \n P = %i x %i = %i watt \n", tegangan, kuat_arus,daya);
  system("PAUSE");	
  return 0;
}
