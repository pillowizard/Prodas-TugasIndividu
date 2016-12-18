#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int sisi_alas;
  int sisi_kiri;
  int sisi_kanan;
  int sisi_atas;
  int keliling;
  
  sisi_alas = 10;
  sisi_kiri = 5;
  sisi_kanan = 5;
  sisi_atas = 8;
  keliling = sisi_alas + sisi_kiri + sisi_kanan + sisi_atas;
  
  printf("Keliling Trapesium = Sisi + Sisi + Sisi + Sisi \n K = %i + %i + %i + %i = %i \n", sisi_alas, sisi_kiri, sisi_kanan, sisi_atas, keliling);
  system("PAUSE");	
  return 0;
}
