#include <stdio.h>
#include <stdlib.h>
#include <math.h> 

int main()
{
  int s, a, b;
  a=1;
  s=0;

  printf("Podaj liczbe: ");
  scanf("%d", &b);

  for (a; a<=b; a++){
    s=s*a;
 
    //printf("silnia=%d | a=%d\n",s, a);
  }
  printf("silnia liczby =%d to=%d\n",b ,s);

    return 0;
}
