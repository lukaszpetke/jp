//Napisać program obliczający silnię z podanej, niezbyt dużej, liczby naturalnej

#include <stdio.h>
int main()
 {
   int i, n, wynik;

    printf("podaj liczbę: ");
    scanf("%d",&n);
    wynik=1;

    for(i=1; i<=n; i++){
      wynik=i*wynik;
	}
	  printf("silnia z liczby %d to: %d\n",i ,wynik);

   return 0;
}
