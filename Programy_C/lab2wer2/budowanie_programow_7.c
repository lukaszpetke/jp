Napisz program, który wczyta liczbę rzeczywistą i wypisze jej odwrotność oraz jej pierwiastek kwadratowy. Program nie powinien obliczać odwrotności liczby 0 oraz pierwiastka z liczby ujemnej. W takiej sytuacji zamiast obliczeń program powinien wypisać odpowiedni komunikat.
#include <stdio.h>

int main() {

  double num, inverse, root;

  printf("Please enter a number: ");
  scanf("%lf", &num);

  if( num==0 )
    printf("%.2lf does not have an inverse.\n", num);
  else{
    inverse=1/num;
    printf("Inverse of the number %.2lf is %.2lf.\n", num, inverse);
  }
  if( num<0 )
    printf("Invalid number - the root of a negative value cannot be calculated\n");
  else {
    root=sqrt(num);
    printf("The root of the number %.2lf is %.2lf\n", num, root);
  }
  return 0;
}
