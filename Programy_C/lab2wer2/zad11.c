//zadeklaruje dwie tablice liczb całkowitych, jedną pięcioelementową, a drugą dwa razy większą, wczyta dane do pierwszej z tabel, a następnie przekopiuje dwa razy dane do drugiej i wypisze na ekran zawartość drugiej tabeli;

#include <stdio.h>
#include <stdlib.h>

int main()
{
  int tab1[5],tab2[10],i;

  for(i=0; i<5; i++){
    printf("podaj tab1[%d]",i);
    scanf("%d",&tab1[i]);
    }

  for(i=0; i<5; i++) {
	tab2[i]=tab1[i];
	tab2[i+5]=tab1[i]*2;
	
	}
  for(i=0; i<10; i++) {
	printf("tab2[%d]=%d\n",i,tab2[i]);
	}

    return 0;
}
