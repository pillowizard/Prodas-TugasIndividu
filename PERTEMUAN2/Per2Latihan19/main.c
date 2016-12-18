#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int massa;
  int gravitasi;
  int tinggi;
  int usaha;
  
  massa = 6;
  gravitasi = 10;
  tinggi = 4;
  usaha = massa * gravitasi * tinggi;
  
  printf("Usaha = Massa x Percepatan Gravitasi x Ketinggian \n W = %i x %i x %i = %i Joule \n", massa, gravitasi, tinggi, usaha);
  system("PAUSE");	
  return 0;
}
