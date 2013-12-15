#include <stdio.h>
#include <stdlib.h>
#include <math.h> 

int main()
{
  int a;
 
    printf("Podaj liczbe z zakresu od 1 do 10000: ");
    scanf("%d", &a);

    if(a%2==1)printf("nie\n");
    else printf("tak\n");

    return 0;
}




