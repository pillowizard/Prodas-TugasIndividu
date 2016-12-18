#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  float lsisi1;
  float lsisi2;
  float lsisi3;
  float lsisi4;
  float lsisi5;
  float lpermukaan;
  
  printf("Masukan Luas Sisi 1 = ");
  scanf("%f", &lsisi1);
  printf("Masukan Luas Sisi 2 = ");
  scanf("%f", &lsisi2);
  printf("Masukan Luas Sisi 3 = ");
  scanf("%f", &lsisi3);
  printf("Masukan Luas Sisi 4 = ");
  scanf("%f", &lsisi4);
  printf("Masukan Luas Sisi 5 = ");
  scanf("%f", &lsisi5);
  
  lpermukaan = lsisi1 + lsisi2 + lsisi3 + lsisi4 + lsisi5;
  
  printf("Luas Permukaan Limas Segiempat = Luas Sisi 1 + Luas Sisi 2 + Luas Sisi 3 + Luas Sisi 4 + Luas Sisi 5 \nLuas Permukaan Limas Segiempat = %.2f + %.2f + %.2f + %.2f + %.2f = %.2f \n", lsisi1, lsisi2, lsisi3, lsisi4, lsisi5, lpermukaan);
  
  system("PAUSE");	
  return 0;
}
