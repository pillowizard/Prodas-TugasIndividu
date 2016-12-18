#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int sisi1;
  int sisi2;
  int keliling;
  
  sisi1 = 5;
  sisi2 = 10;
  keliling = 2 * (sisi1 + sisi2);
  
  printf("Keliling Layang-Layang = 2 x (Sisi1 +Sisi2) \n K = 2 x (%i + %i) = %i \n", sisi1, sisi2, keliling);
  system("PAUSE");	
  return 0;
}
