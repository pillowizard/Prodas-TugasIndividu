#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int sisi;
  int lpermukaan;
  
  printf("Masukan Sisi = ");
  scanf("%i", &sisi);
  
  lpermukaan = 6 * sisi * sisi;
  
  printf("Luas Permukaan Kubus = 6 x Sisi x Sisi \nLuas Permukaan Kubus = 6 x %i x %i = %i \n", sisi, sisi, lpermukaan);
  system("PAUSE");	
  return 0;
}
