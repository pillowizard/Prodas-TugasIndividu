#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int jml_sisi_sejajar;
  int tinggi;
  int luas;
  
  jml_sisi_sejajar = 18;
  tinggi = 4;
  luas = (jml_sisi_sejajar * tinggi) / 2;
  
  printf("Luas Trapesium = 1/2 x Jumlah Sisi Sejajar x Tinggi \n L = 1/2 x %i x %i = %i \n", jml_sisi_sejajar, tinggi, luas);
  system("PAUSE");	
  return 0;
}
