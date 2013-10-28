#include<stdio.h>
#include<stdlib.h>

// przy uruchomieniu programu trzeba podać 3 wartości dla lower upper i step

int main(int argc, char *argv[]) { //argv definiuje tablicę - argc wynika z kontekstu programu
  int fahr;
  int lower, upper, step;

  lower=atoi(argv[1]); //atoi robi łańcuch znaków
  upper;atoi(argv[2]); 
  step=atoi(argv[3]);
  printf("lower = %d, upper = %d, step = %d\n",lower, upper, step);
  for(fahr=lower; fahr<=upper; fahr=fahr+step){
    printf("%3d%6.1f\n",fahr,(5.0/9.0)*(fahr-32));
  }
  return 0;
}
