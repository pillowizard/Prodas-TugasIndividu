#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  const float phi = 3.14;
  int jari;
  float keliling;
  
  printf("Masukan Jari-Jari = ");
  scanf("%i", &jari);
  
  keliling = 2 * phi * jari;
  
  printf("Keliling Lingkaran = 2 x Phi x Jari-Jari \nKeliling Lingkaran = 2 x 3.14 x %i = %.2f \n", jari, keliling);
  
  system("PAUSE");	
  return 0;
}
