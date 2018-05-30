#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>
int isPrime (int x) {
    bool prime = 1;
    if(x%2 == 0) prime=0;
    if(x>1){
    for(int a=3; a<sqrt(x); a=a+2) {
      if(x%a==0) prime = 0;
    }
  } else prime = 0;
    switch(prime) {
      case 0: return 0;
      case 1: return 1;
    }
}
int main() {
  int input = 0;
  int check = 0;
  do{
  printf("Please input an integer.\n");
  fflush(stdin);
  check = scanf("%d", &input);
} while(check == 0);
  /*switch(isPrime(input)) {
    case 0: {printf("Number %i is not a prime!",input); break;}
    case 1: {printf("Number %i is a prime!",input); break;}
    default: printf("Unexpected error, please check your input!");}*/
    printf("\n");
    for(int f=2;f<=input;f++) {
      if(isPrime(f)==1) printf("%d\n", f);
    }
  return 0;
}
