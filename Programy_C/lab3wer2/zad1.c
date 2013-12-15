#include <stdio.h>

int p,x,y;


int pkw(int a,int b){
  int pole;
  pole = a*b;
  return pole;
}

int main(){
  printf("Podaj liczbe a:  ");
  scanf("%d",&x);
  printf("Podaj liczbe b: ");
  scanf("%d",&y);

  p=pkw(x,y) ;
  printf("Pole kwadratu: %d\n",p);

}

