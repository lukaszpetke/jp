/* Program ten dla dwóch liczb wczytanych z klawiatury
   wypisuje, która z nich jest większa. */
#include <stdio.h>
int main()
{
   int licz1 ;

   printf("wpisz liczbe i sprawdz czy jest ona patrzysta czy nieparzysta: ");
   scanf("%d", &licz1);
   if (licz1 % 2) printf("liczba %d nie jest parzysta\n", licz1);
   else printf("liczba %d jest parzysta\n",licz1);
  return 0;
}
