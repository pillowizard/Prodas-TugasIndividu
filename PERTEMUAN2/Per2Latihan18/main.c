#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int jarak;
  int waktu;
  int kecepatan;
  
  jarak = 3000;
  waktu = 60;
  kecepatan = jarak / waktu;
  
  printf("Kecepatan = Jarak / Waktu \n v = %i / %i = %i m/s \n", jarak, waktu, kecepatan);
  system("PAUSE");	
  return 0;
}
