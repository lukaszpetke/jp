#include <stdio.h>
#include <stdlib.h>

int main()
{
  int tab[5],i,x,y;

  for(i=0; i<5; i++){
    printf("podaj tab[%d]",i);
    scanf("%d",&tab[i]);
  }

    for(i=0; i<5; i++)

      printf("tab[%d]=%d\n",i,tab[i]);
      printf("\n");

      if(i=0){
	printf("tab[%d]=%d\n",i,tab[i]);}
	else{
	 x=0;
	 i=4;
	 printf("tab[%d]=%d\n",x,tab[i]);}
      
      if(i=4){
	x=4;
	i=0;
	printf("tab[%d]=%d\n",x,tab[i]);}


    return 0;
}
