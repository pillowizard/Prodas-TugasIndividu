#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int menu;
  int jumlah;
  float cashback;
  float diskon;
  float subtotal;
  float total;
  
  printf("MENU UTAMA \n");
  printf("========== \n");
  printf("1. Bebek \n");
  printf("2. Ayam \n");
  printf("Masukan Menu : ");
  scanf("%i", &menu);
  
  switch (menu) {
         case 1:
              system("cls");
              printf("Masukan jumlah beli = ");
              scanf("%i", &jumlah);
              
              subtotal = jumlah * 10000;
              if (jumlah > 5) {
                   cashback = 20000;
              }
              total = subtotal - cashback;
              
              printf("Harga yang harus dibayar = %.2f \n",total);
              break;
              
         case 2:
              system("cls");
              printf("Masukan jumlah beli = ");
              scanf("%i", &jumlah);
              
              subtotal = jumlah * 5000;
              if (jumlah > 10) {
                   diskon = subtotal * 0.2;
              }
              total = subtotal - diskon;
              
              printf("Harga yang harus dibayar = %.2f \n",total);
              break;
              
         default :
              system("cls");
              printf("Menu tidak tersedia \n");
  }
  
  system("PAUSE");	
  return 0;
}
