#include<stdio.h>
int main() {
    int n, sum;

    printf("\nEnter last Value of series : ");
    scanf("%d", &n);

    sum = (n* (n+1))/2;

    printf("\nSum of the series is : %d", sum);
    return 0;
}