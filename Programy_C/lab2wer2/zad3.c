//program wypisuje pięć następnych potęg od liczby którą podaliśmy

#include <stdio.h>
#include <stdlib.h>

int main()
{
  int tab[5], i, a, z;
  z=1;
printf("Podaj jej potege: ");
scanf("%d",&z);
 
  for(i=0; i<5; i++){
    z=2*z; 
    tab[i]=z;
    printf("tab[%d] %d\n",i,tab[i]);
}
    return 0;
}
