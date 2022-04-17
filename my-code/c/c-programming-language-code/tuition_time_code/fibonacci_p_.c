#include<stdio.h>
int main() {
    int i, n, f1, f2, f_n;
    printf("\nPlease Enter How Many Fibonacci Number You Want to Print : ");
    scanf("%d", &n);
    f1 = 0;
    f2 = 1;
    printf("%d\t%d\t", f1,f2);
    for ( i=3; i<=n; i++ ) {
        f_n = f1+f2;
        printf("%d\t", f_n);
        f1 = f2;
        f2 = f_n;
    }
    return 0;
}