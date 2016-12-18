#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int sisi1;
  int sisi2;
  int keliling;
  
  printf("Masukan Sisi 1 = ");
  scanf("%i", &sisi1);
  printf("Masukan Sisi 2 = ");
  scanf("%i", &sisi2);
  
  keliling = 2 * (sisi1 + sisi2);
  
  printf("Keliling Layang-Layang = 2 x (Sisi1 + Sisi2) \nKeliling Layang-Layang = 2 x (%i + %i) = %i \n", sisi1, sisi2, keliling);
  
  system("PAUSE");	
  return 0;
}
