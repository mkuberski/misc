#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int triangularNum(int x) {
  int tN = 0;
  tN = (x*(x+1))/2;
  return tN;
}
int main() {
  int input = 0;
  int check = 0;
  do{
  printf("Please input an integer.\n");
  fflush(stdin);
  check = scanf("%d", &input);
} while(check == 0);
  printf("The triangular number no.%d is %d\n",input,triangularNum(input));
  return triangularNum(input);
}
