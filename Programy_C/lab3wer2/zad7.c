#include <stdio.h>
#include <stdlib.h>
#include <math.h> 

int main()
{
  int rok;
 
    printf("Podaj rok: ");
    scanf("%d", &rok);

    if ((rok%4)==0 && (rok%100)!=0 || (rok%400)==0)
      printf("rok %d jest przestepny\n", rok);

      else printf("rok %d nie jest przestepny\n", rok);

    return 0;
}




