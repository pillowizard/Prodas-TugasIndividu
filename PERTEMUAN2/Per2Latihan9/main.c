#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int sisi_alas;
  int sisi_kiri;
  int sisi_kanan;
  int keliling;
  
  sisi_alas = 4;
  sisi_kiri = 12;
  sisi_kanan = 12;
  keliling = sisi_alas + sisi_kiri + sisi_kanan;
  
  printf("Keliling Segitiga = Sisi + Sisi + Sisi \n K = %i + %i + %i = %i \n", sisi_alas, sisi_kiri, sisi_kanan, keliling);
  system("PAUSE");	
  return 0;
}
