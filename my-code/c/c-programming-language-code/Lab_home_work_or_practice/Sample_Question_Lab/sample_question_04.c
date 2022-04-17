#include<stdio.h>
int main() {
    int i, n, sum=0 ;
    printf("Enter The End Number : ");
    scanf("%d", &n);
    for ( i=2; i<=n; i=i+2 ) {
        sum = sum + i*i;
    }
    printf("\nTotal Sum is : %d", sum);
    return 0;
}