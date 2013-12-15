#include <stdio.h>
 
int main()
{
   int n, odw = 0;
 
   printf("Wprowadz liczbe\n");
   scanf("%d",&n);
 
   while (n != 0)
   {
      odw = odw * 10;
      odw = odw + n%10;
      n = n/10;
   }
 
   printf("wypisze liczbe w odwrotnej formie = %d\n", odw);
 
   return 0;
}
