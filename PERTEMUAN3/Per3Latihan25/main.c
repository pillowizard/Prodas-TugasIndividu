#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  const float phi = 3.14;
  int jari;
  float lpermukaan;
  
  printf("Masukan Jari-Jari = ");
  scanf("%i", &jari);
  
  lpermukaan = 4 * phi * jari * jari;
  
  printf("Luas Permukaan Bola = 4 x Phi x Jari x Jari \nLuas Permukaan Bola = 4 x 3.14 x %i x %i = %.2f \n", jari, jari, lpermukaan);
  
  system("PAUSE");	
  return 0;
}
