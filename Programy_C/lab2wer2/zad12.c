//wczyta od użytkownika dane do pięcioelementowej tablicy liczb całkowitych, a następnie wypisze jej największy element na ekran;

#include <stdio.h>
#include <stdlib.h>

int main()
{
  int tab1[5],i,naj;

  for(i=0; i<5; i++){
    printf("podaj tab1[%d]",i);
    scanf("%d",&tab1[i]);
    }

  for(i=0; i<5; i++) {

		printf("tab1[%d]=%d\n",i,tab1[i]);
			 if (naj<tab1[i])
				{
				  naj=tab1[i];
				}
	}

 printf("najwiekszy podany element to= %d\n",naj);


    return 0;
}
