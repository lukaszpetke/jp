#include <stdio.h>

int main(){
  int fahr; 

  for(fahr=0; fahr<=300; fahr=fahr+20){ // for jeżeli chcemy jakąś czynnośc powtorzyc wiele razy...... for...ogarnicznik dolny - górny - krok...
    printf("%3d%6.1f\n",fahr,(5.0/9.0)*(fahr-32)); //6.1 czyli jeden po przecinku
  }
  return 0;
}
