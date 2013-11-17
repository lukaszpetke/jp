//program sumuje wszystkie liczby

#include <stdio.h>
#include <stdlib.h>

int main()
{
  int tab[5], i, a, z;
  z=0;
printf("Podaj liczbę: ");
scanf("%d",&a);
 
  for(i=0; i<5; i++){
    z=z+a; 
    tab[i]=z;
    printf("tab[%d] %d\n",i,tab[i]);
}
    return 0;
}
