/* Program ten dla dwóch liczb wczytanych z klawiatury
   wypisuje, która z nich jest większa. */
#include <stdio.h>
int main()
{
   int licz2, licz1 ;

   printf("Podaj pierwsza liczbe: ");
   scanf("%d", &licz1);
   printf("podaj druga liczbe:");
   scanf("%d", &licz2);
   if (licz1 > licz2) puts("liczba 1 jest wieksza");
     else if (licz1 < licz2) puts("liczba 2 jest wieksza");
       else puts("liczby sa rowne");
  return 0;
}
