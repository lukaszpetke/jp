#include <stdio.h>

int main(){
  int i, sum=0, sumk=0;
  for (i = 1; i<=20 ; i++)
    {
      sumk=i*i;
      sum=i*i*i;
      printf(" %d %d %d \n", i, sumk, sum);
    }
 
 return 0;
}
