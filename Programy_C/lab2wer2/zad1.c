#include <stdio.h>
#include <stdlib.h>

int main()
{
  // int tab[]={1,3,7,8,9}; //sposób pierwszy
  // int i;
    
  ///sposob drugi
  int tab[5],i;

  for(i=0; i<=4; i++){
    printf("podaj tab[%d]",i);
    scanf("%d",&tab[i]);
  }
  ///

    for(i=0; i<=4; i++)

      printf("tab[%d]=%d\n",i,tab[i]);

    return 0;
}
