#include<stdio.h>
int main() {
    float i = 0, j = 1;
    while ( i <= 2.0) {
        printf("I=%g J=%g\n", i,j);
        j = j+1;
        printf("I=%g J=%g\n", i,j);
        j=j+1;
        printf("I=%g J=%g\n", i,j);
        j -=1.8;
        i +=0.2;
    }
    return 0;
}