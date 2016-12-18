#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int massa;
  int percepatan;
  int gaya;
  
  massa =50;
  percepatan = 2;
  gaya = massa * percepatan;
  
  printf("Gaya = Massa x Percepatan \n F = %i x %i = %i N \n", massa, percepatan, gaya);
  system("PAUSE");	
  return 0;
}
