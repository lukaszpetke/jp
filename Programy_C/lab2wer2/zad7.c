#include <stdio.h>
#include <stdlib.h>

int main()
{
  int tab[5],i;

  for(i=0; i<5; i++){
    printf("podaj tab[%d]",i);
    scanf("%d",&tab[i]);
  }

    for(i=0; i<5; i++)

      printf("tab[%d]=%d\n",i,tab[i]);
      printf("\n");

      for(tab[i]=0; i<5; i++){
	if(tab[i]%2==0)
	printf("liczby parzyste to: tab[%d]=%d\n",i,tab[i]);
      }

    return 0;
}
