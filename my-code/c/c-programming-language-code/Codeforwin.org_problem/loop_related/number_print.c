#include<stdio.h>
int main() {
    int a = 1, n;
    printf("\nEnter an Integer number n= ");
    scanf("%d", &n);
    //a = 1;
    while ( a<=n ) {
        printf("%d\n", a);
        a++;
    }
    return 0;
}