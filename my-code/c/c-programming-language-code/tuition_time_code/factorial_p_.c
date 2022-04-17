#include<stdio.h>
int main() {
    int i, n, fact=1;
    printf("\nPlease Enter An Integer Number To finds it's Factorial : ");
    scanf("%d", &n);
    for ( i=n; i>=1; i-- ) {
        fact = fact*i;
    }
    //for ( i=1; i<=n; i++ ) {
    //fact = fact*i;
    //}
    printf("%d", fact);
    return 0;
}