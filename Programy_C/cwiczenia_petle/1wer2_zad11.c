#include <stdio.h>

int main(){
  int i, liczba, sum=0;

  printf("podaj liczbe calkowita:");
  scanf("%d", &liczba);

  if (liczba > 2){
    for (i=1; i<=liczba; i=i++){
      sum=sum+(i*i);
    }
    printf("suma: %d \n", sum);
  }

  else puts("liczba musi byc wieksza od 2");

  return 0;
}
