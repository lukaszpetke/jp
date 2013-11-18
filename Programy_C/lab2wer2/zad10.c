//zadeklaruje dwie pięcioelementowe tablice liczb całkowitych, wczyta dane do pierwszej z tabel, a następnie przekopiuje dwukrotnie powiększone dane do drugiej i wypisze na ekran zawartość drugiej tabelili

#include <stdio.h>
#include <stdlib.h>

int main()
{
  int tab1[5],tab2[5],i;

  for(i=0; i<5; i++){
    printf("podaj tab1[%d]",i);
    scanf("%d",&tab1[i]);
    }

  for(i=0; i<5; i++) {
	tab2[i]=tab1[i]*2;
	printf("tab2[%d]=%d\n",i,tab2[i]);
	}

    return 0;
}
