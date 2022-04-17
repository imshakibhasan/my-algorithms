#include<stdio.h>
int main() {

    int i, n, sum=0;
    printf("\nPlease Enter An Integer Number : ");
    scanf("%d", &n);
    for ( i=1; i<=n; i=i+2 ) {
        sum = sum+i;
    }
    //sum = (n*(n+1))/2;
    printf("Summation = %d", sum);
    return 0;
}