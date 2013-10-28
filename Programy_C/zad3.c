#include <stdio.h>
int main(){
  float fahr, celsius; //float to liczby rzeczywiste
  int lower, upper, step;
  lower=0;
  upper=300;
  step=20;

  fahr=lower;
  while(fahr<=upper){
    celsius=(5.0/9.0)*(fahr-32); //bez .0 będzie zaokrąglał
    printf("%3.0f%8.3f\n" ,fahr,celsius); //f to liczby rzeczywiste 8 pozycji i 3 po przecinku... 3 pozycji i 0 po przecinku
    fahr=fahr+step;
  }
  return 0;
}
