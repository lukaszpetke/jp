#include <stdio.h>
#include <stdlib.h>
#include <math.h> 

int main()
{
  int suma, a;
  suma=0;

  for (a=11; a<=50; a++){
    suma=suma+a;
 
    //  printf("suma=%d | a=%d ",suma,a);
  }
  printf("suma liczb od 11 do 50=%d\n",suma);


    return 0;
}
