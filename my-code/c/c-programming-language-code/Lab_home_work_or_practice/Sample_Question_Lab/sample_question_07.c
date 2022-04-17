#include<stdio.h>
int main() {
    double i, m, sum=1.00;
    printf("\nEnter a Number(to find it's factorials) : ");
    scanf("%lf", &m);
    for ( i=1.00; i<=m; i++) {
        sum = sum*i;
    }
    printf("\nFactorial of 'm' is : %.2lf", sum);
    return 0;
} 