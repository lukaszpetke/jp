//Trójkąt pitagorejski to trójkąt prostokątny, w którym długość każdego boku jest liczbą całkowitą. Napisz program wypisujący wszystkie trójkąty pitagorejskie, których obwód nie przekracza 1000.

#include <stdio.h>
#include <math.h>

int main(){
  float a,b,c,suma,roznica;
  int x,i;

  i=1;
  
  for (a=1;a<=1000;a++)
    {
     for(b=a;b<=1000;b++)
        {
          c=sqrt((a*a)+(b*b));
          x=sqrt((a*a)+(b*b));
          roznica=c-x;
          suma=a+b+c;
          if ((roznica==0)&&(suma<=1000)) printf("%3d | A=%6.2f | B=%6.2f | C=%6.2f | SUMA=%4.0f \n ------------------------------------------------\n",i++,a,b,c,suma);
        }
    }
    
  return 0;
}
