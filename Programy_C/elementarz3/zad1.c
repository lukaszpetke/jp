//1. W poniższym programie, który kopiując wejście na wyjście zastępuje kazdy znak tabulacji przez \t oraz każdy znak \ przez dwa takie znaki, zostały przestawione wiersze. Uporzadkuj je, tak aby powstał działający program.

#include <stdio.h>

int main() {
int c;

  while ((c=getchar())!=EOF)

  if (c=='\t')
    printf("\\t");

  else if (c=='\\')
    printf("\\\\");

  else
    putchar(c);

return 0;

}
