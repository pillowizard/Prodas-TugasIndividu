#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int sisi;
  int keliling;
  
  printf("Masukan Sisi = ");
  scanf("%i", &sisi);
  
  keliling = 4 * sisi; 
  
  printf("Keliling Persegi = 4 x Sisi \nKeliling Persegi = 4 x %i = %i \n", sisi, keliling);
  
  system("PAUSE");	
  return 0;
}
