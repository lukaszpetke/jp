//Napisz program, który wczyta liczbę rzeczywistą i wypisze jej pierwiastek kwadratowy. W wypadku podania liczby ujemnej, program powinien wypisać komunikat o błędzie oraz zakończyć działanie.

#include <stdio.h>
#include <math.h>

int main() {

  double number, root;

  printf("Please enter a number: ");
  scanf("%lf", &number);

  if( number<0 ) {
    printf("Invalid input - negative number");
    printf("\n");
    return 0;
  }

  root=sqrt(number);
  printf("Root of the number %.2lf is %.2lf\n", number, root);

  return 0;
}
