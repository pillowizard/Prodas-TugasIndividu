#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int panjang;
  int lebar;
  int tinggi;
  int lpermukaan;
  
  panjang = 10;
  lebar = 4;
  tinggi = 6;
  lpermukaan = (panjang * lebar) + (panjang * tinggi) + (lebar * tinggi);
  
  printf("Luas Permukaan Balok = (Panjang x Lebar) + (Panjang x Tinggi) + (Lebar x Tinggi) \n LP = (%i x %i) + (%i x %i) + (%i x %i) = %i \n", panjang, lebar, panjang, tinggi, lebar, tinggi, lpermukaan);
  
  system("PAUSE");	
  return 0;
}
