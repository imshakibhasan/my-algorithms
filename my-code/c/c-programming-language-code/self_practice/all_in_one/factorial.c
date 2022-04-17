#include<stdio.h>
int main() {
    int a, n, sum=0;
    printf("\nEnter an Integer Number to find its Factorial : ");
    scanf("%d", &n);
    for (a=1; a<=n; a++) {
        sum = sum + a;
    }
    printf("Factorial is : %d", sum);
    return 0;
}