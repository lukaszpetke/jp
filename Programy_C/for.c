#include <stdio.h>

int main(){
  int warun=1; 

while (warun < 11){ //od 1 do 10.. na 11 skonczy i juz nie wypisze
printf("%i zielonych butelek stoi pod  sciana\n", warun);
warun++; //oznacza powieksz wartosc o jeden (bez tego petla nie bedzie dzialac poprawnie) daje to informacje, ze przy kazdym obrocie petli ma dodawac o jeden...
}
  return 0;
}
