#include <stdio.h>
#include <stdlib.h>
#include <math.h> 

int main()
{
  int o, h, p, r, pi;
  pi=3.14;
    printf("Podaj promien podstawy stozka r: ");
    scanf("%d", &r);
    p=pi*(r*r);

    printf("Podaj wysokosc stozka: ");
    scanf("%d", &h);

    o=(h*p)/3;
    printf("Objetosc stozka wynosi:%d\n",o);

    return 0;
}
