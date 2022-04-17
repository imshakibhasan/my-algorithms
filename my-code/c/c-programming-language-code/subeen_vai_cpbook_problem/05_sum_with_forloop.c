#include<stdio.h>
int main() {
    int i, n, sum;
    printf("\nEnter last Value of series : ");
    scanf("%d", &n);
    sum = 0;

    for (i=1; i<=n; i++) {
        sum = sum + i;
    }
    printf("\nSummation is : %d", sum);
    return 0;
}