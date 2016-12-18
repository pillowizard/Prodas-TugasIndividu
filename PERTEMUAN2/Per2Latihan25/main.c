#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int gaya_tekan;
  int luas_bidang_tekan;
  int tekanan;
  
  gaya_tekan = 50;
  luas_bidang_tekan = 5;
  tekanan = gaya_tekan / luas_bidang_tekan;
  
  printf("Tekanan = Gaya Tekan / Luas Bidang Tekan \n P = %i / %i = %i atm \n", gaya_tekan, luas_bidang_tekan, tekanan);
  system("PAUSE");	
  return 0;
}
