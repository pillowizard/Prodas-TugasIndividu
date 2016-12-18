#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int sisi;
  int lpermukaan;
  
  sisi = 10;
  lpermukaan = (sisi * sisi) * 6;
  
  printf("Luas Permukaan Kubus = 6 x (Sisi x Sisi) \n LP = 6 x (%i x %i) = %i \n", sisi, sisi, lpermukaan);
  
  system("PAUSE");	
  return 0;
}
