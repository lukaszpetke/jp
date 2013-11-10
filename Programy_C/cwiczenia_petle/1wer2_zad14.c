#include <stdio.h>

int main(){
  int a, i, N;

  printf("podaj liczbe calkowita:");
  scanf("%d", &N);
  a=0;
  for (i=0; a<N; i++){    
    a=a+(i*i);
  }
  i=i-2;
  printf("największą liczbą naturalną n jest: %d \n", i);

  return 0;
}
