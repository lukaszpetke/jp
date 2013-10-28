/* Program ten dla dwóch liczb wczytanych z klawiatury
   wypisuje, która z nich jest większa. */
#include <stdio.h>
int main()
{
  int licz1, licz2 ;

   printf("wpisz dwie liczby i sprawdź czy są one równe\n Wpisz pierwszą liczbę:");
   scanf("%d", &licz1);
   printf("Wpisz drugą liczbę:");
     scanf("%d", &licz2);
     if (licz1=licz2) printf("liczba %d i %d nie jest równa\n", licz1, licz2);
     else printf("liczba %d i %d nie jest rowna\n", licz1 ,licz2);
  return 0;
}
