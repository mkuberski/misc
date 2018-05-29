#include <stdio.h>

void triangle(int x) {
    for(int a=0;a<2*x;a++) {
        printf("\n");
        for(int b=0;b<=2*x-a;b++) printf(" ");
        for(int c=0;c<=a;c++) printf("x");
        }
    }

int main(void) {
    triangle(2);
}
