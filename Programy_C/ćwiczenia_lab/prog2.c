/* Program ten dla dwóch liczb wczytanych z klawiatury
   wypisuje, która z nich jest większa. */
#include <stdio.h>
int main()
{
   int licz1 ;

   printf("wpisz liczbe i sprawdz czy jest dodatnia czy ujemna: ");
   scanf("%d", &licz1);
   if (licz1 > 0) printf("liczba %d jest liczbą dodatnią\n", licz1);
   else if (licz1 < 0) printf("liczba %d jest liczbą ujemną\n",licz1);
  return 0;
}
