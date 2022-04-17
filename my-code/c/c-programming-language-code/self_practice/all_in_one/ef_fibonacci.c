#include<stdio.h>
int main() {
    int i, n;
    printf("\nEnter how many Fibonacci value you print : ");
    scanf("%d", &n);
    int f, f1=1, f0=0;
    printf(" 0 1 ");

    for ( i=2; i<n; i++) {
        f= f1+f0;
        printf("%d ", f);
        f0=f1;
        f1=f;
    }
    return 0;
}