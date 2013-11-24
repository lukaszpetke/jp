#include <stdio.h>

int main()
{
  int i, l, j;
  printf("podaj liczbe: ");
  scanf("%d",&j);
 
  l=0;
  for(i=0; i<j; i++)
    {
      if(l==0){
	printf("* * * * * * *\n");
	l=1;
      }
      else if(l==1){
	printf(" * * * * * * *\n");
	l=0;
      }

    }

  return 0;
}
