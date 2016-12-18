#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int sisi1;
  int sisi2;
  int sisi3;
  int sisi4;
  int keliling;
  
  printf("Masukan Sisi 1 = ");
  scanf("%i", &sisi1);
  printf("Masukan Sisi 2 = ");
  scanf("%i", &sisi2);
  printf("Masukan Sisi 3 = ");
  scanf("%i", &sisi3);
  printf("Masukan Sisi 4 = ");
  scanf("%i", &sisi4);
  
  keliling = sisi1 + sisi2 + sisi3 + sisi4;
  
  printf("Keliling Trapesium = Sisi1 + Sisi2 + Sisi3 + Sisi4 \nKeliling Trapesium = %i + %i + %i + %i = %i \n", sisi1, sisi2, sisi3, sisi4, keliling);
  
  system("PAUSE");	
  return 0;
}
