#include <stdio.h>
#include <stdlib.h>

float finalPrice(int buyNowPrice,int playerPrice,float coinsPrice){
int equ = ((buyNowPrice * .95)-playerPrice);
float x = coinsPrice / 1000000.0;
return equ * x ;
}
float withoutTax(int buyNowPrice,int playerPrice,float coinsPrice){
int equ = (buyNowPrice-playerPrice);
float x = coinsPrice / 1000000.0;
return equ * x ;
}

int main(){
    int buyNowPrice;
    int playerPrice;
    int coinsPrice;
    char tax;
  printf("buy now price : ");
scanf(" %i", &buyNowPrice);
printf("player price : ");
scanf(" %i" , &playerPrice);
printf("coins price : ");
scanf(" %i" , &coinsPrice);
printf("whith tax y/n ? ");
scanf(" %c" ,&tax);
  if(tax == 'y' || tax == 'Y'){
  float Price = finalPrice( buyNowPrice,playerPrice,coinsPrice);
  printf("final price =  %.1f \n", Price);
  }
else if(tax == 'n' || tax == 'N'){
 float Price = withoutTax( buyNowPrice,playerPrice,coinsPrice);
printf("final price =  %.1f \n", Price);
}
system("pause");
return 0;
}
