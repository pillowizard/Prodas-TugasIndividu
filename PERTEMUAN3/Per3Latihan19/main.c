#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int panjang;
  int lebar;
  int tinggi;
  int lpermukaan;
  
  printf("Masukan Panjang = ");
  scanf("%i", &panjang);
  printf("Masukan Lebar = ");
  scanf("%i", &lebar);
  printf("Masukan Tinggi = ");
  scanf("%i", &tinggi);
  
  lpermukaan = (2 * panjang * lebar) + (2 * panjang * tinggi) + (2 * lebar * tinggi);
  
  printf("Luas Permukaan Balok = (2 x Panjang x Lebar) + (2 x Panjang x Tinggi) + (2 x Lebar x Tinggi) \nLuas Permukaan Balok = (2 x %i x %i) + (2 x %i x %i) + (2 x %i x %i) = %i \n", panjang, lebar, panjang, tinggi, lebar, tinggi, lpermukaan);
  
  system("PAUSE");	
  return 0;
}
