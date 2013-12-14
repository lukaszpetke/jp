#include <stdio.h>
#include <math.h>

int main()
{
  int a;
  float wynik;
  
  a=1;
 
  printf("--------------\n");
  printf("|  X |sqrt(X)|\n");
  printf("--------------\n");

    for (a=1;a<21;a++)
      {
        wynik=sqrt(a);
        printf("| %2d | %4.2f  |\n",a,wynik);
  
      }
    
  printf("--------------\n");

  return 0;
}
