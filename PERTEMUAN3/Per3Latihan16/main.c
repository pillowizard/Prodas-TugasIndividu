#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  const float phi = 3.14;
  int jari;
  float luas;
  
  printf("Masukan Jari-Jari = ");
  scanf("%i", &jari);
  
  luas = phi * jari * jari;
  
  printf("Luas Lingkaran = Phi x Jari-Jari x Jari-Jari \nLuas Lingkaran = 3.14 x %i x %i = %.2f \n", jari, jari, luas);
  
  system("PAUSE");	
  return 0;
}
