#include <stdio.h>
#include <stdlib.h>
#include <math.h> 

int main()
{
    int a, b, p;

    printf("Podaj liczbe a: ");
    scanf("%d", &a);
    printf("Podaj liczbe b: ");
    scanf("%d", &b);
    p=(a/2)*b;
    printf("Pole deltoidu jest rowne=%d\n",p);

    return 0;
}
