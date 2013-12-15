#include <stdio.h>

unsigned long long int s,n1;
unsigned int p,i,n;
 
int main(){
        p =2; 
        n =3;  
        n1=2;  
        do{
                s=4;                     
                for(i=3; i<=p; i++)      
                        s=(s*s-2) % n;  
                if (s==0 || p==2)       
                        printf("2^%2d-1=%2d, liczba doskonala %3llu\n", p, n, n1*n);
                p++;
                n1=n+1;
                n=2*n+1;
        }while (p<6);
        return(0);
}

