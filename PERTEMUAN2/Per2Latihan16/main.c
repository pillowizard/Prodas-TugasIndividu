#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int diagonal1;
  int diagonal2;
  int luas;
  
  diagonal1 = 4;
  diagonal2 = 4;
  luas = (diagonal1 * diagonal2) / 2;
  
  printf("Luas Belah Ketupat = 1/2 x d1 x d2 \n L = 1/2 x %i x %i = %i \n", diagonal1, diagonal2, luas);
  system("PAUSE");	
  return 0;
}
