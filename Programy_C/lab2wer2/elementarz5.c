#include <stdio.h>


  int main (){
    int c;
    int nb, nt, nl;
    nt = 0;
    nl = 0;
    nb = 0;

    while ((c=getchar()) != EOF)

      if (c == ' ') 
	++nl;
      else if (c == '\t')
	++nb;
      else if (c == '\n')
	++nt;
    
    printf("%d %d %d\n", nb, nt, nl);


  return 0;
}
