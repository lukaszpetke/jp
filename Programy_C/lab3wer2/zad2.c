#include <stdio.h>

int p,x,y;

int pkw(int a,int b){
  int pol;
  pol = (a/2)*b;
  return pol;
}


int main(){
  printf("Podaj liczbe a: ");
  scanf("%d",&x);
  printf("Podaj liczbe b: ";
  scanf("%d",&y);

  p=pkw(x,y) ;
  printf("Pole deltoidu jest rowne = %d\n",p);
}
