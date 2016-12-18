#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int diagonal1;
  int diagonal2;
  float luas;
  
  printf("Masukan Diagonal 1 = ");
  scanf("%i", &diagonal1);
  printf("Masukan Diagonal 2 = ");
  scanf("%i", &diagonal2);
  
  luas = 0.5 * diagonal1 * diagonal2;
  
  printf("Luas Belah Ketupat = 1/2 x Diagonal1 x Diagonal2 \nLuas Belah Ketupat = 1/2 x %i x %i = %.2f \n", diagonal1, diagonal2, luas);
  
  system("PAUSE");	
  return 0;
}
