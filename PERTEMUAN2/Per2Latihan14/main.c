#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int dvertical;
  int dhorizontal;
  int luas;
  
  dvertical = 12;
  dhorizontal = 8;
  luas = (dvertical * dhorizontal) / 2;
  
  printf("Luas Layang-Layang = 1/2 x d1 x d2 \n L = 1/2 x %i x %i = %i \n", dvertical, dhorizontal, luas);
  system("PAUSE");	
  return 0;
}
