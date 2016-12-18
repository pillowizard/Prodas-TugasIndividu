#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int massa;
  int gravitasi;
  int ketinggian;
  int potensial;
  
  massa = 2;
  gravitasi = 10;
  ketinggian = 10;
  potensial = massa * gravitasi * ketinggian;
  
  printf("Energi Potensial = Massa x Percepatan Gravitasi x Ketinggian \n Ep = %i x %i x %i = %i joule \n", massa, gravitasi, ketinggian, potensial);
  system("PAUSE");	
  return 0;
}
