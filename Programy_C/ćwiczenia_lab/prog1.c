/* Program ten dla dwóch liczb wczytanych z klawiatury
   wypisuje, która z nich jest większa. */
#include <stdio.h>
int main()
{
   int licz1 ;

   printf("wpisz liczbe i sprawdz czy jest wieksza od 5: ");
   scanf("%d", &licz1);
   if (licz1 > 5) printf("liczba %d jest większa od 5\n", licz1);
   else if (licz1 < 5) printf("liczba %d jest mniejsza od 5\n",licz1);
       else puts("jest rowna rowna");
  return 0;
}
