#include <stdio.h>

int main(){
  int i, liczba, sum=0;
  printf("podaj liczbe calkowita:");
  scanf("%d", &liczba);

  for (i=1; i<=liczba; i=i++){
    sum=sum+i;
  }
  printf("suma: %d \n", sum);
  return 0;
}
