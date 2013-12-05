#include <stdio.h> 
#include <stdlib.h> 

int main() 
{
  int i, j, a;

  a=4;

  for( i = 0; i < a; i++ ) 
  {
    for ( j = 0; j <= i; j++ )
      printf( "*" ); 
    putchar( '\n' ); 
  }

      printf( "\n" ); 

  for( i = 0; i < a; i++ ) 
  {
    for ( j = 4; j > i; j-- )
      printf( "*" ); 
    putchar( '\n' ); 
  }

      printf( "\n" ); 

  for( i = 0; i < a; i++ ) 
  {
    printf( "%*c", i + 1, ' ' );
    for ( j = 4; j > i; j-- )
      printf( "*" ); 
    putchar( '\n' ); 

  }

      printf( "\n" ); 

  for( i = 0; i < a; i++ ) 
  {
    printf( "%*c", a - i, ' ' );
    for ( j = 0; j <= i; j++ )
      printf( "*" ); 
    putchar( '\n' ); 
  }


  return 0; 
}
