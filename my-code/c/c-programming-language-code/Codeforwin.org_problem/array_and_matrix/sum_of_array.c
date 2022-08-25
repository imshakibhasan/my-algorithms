#include<stdio.h>
int main() {
    int i, n, sum = 0;
    printf("\nPlease Enter the Array size: ");
    scanf("%d", &n);
    int a[n];
    for ( i=0; i<n; i++ ) {
        printf("\nEnter a[%d] Elements : ", i);
        scanf("%d", &a[i]);
        sum=sum+a[i];
    }
   /* for ( i=0; i<n; i++ ) {
        sum = sum+a[i];
    }*/
    printf("\nSummation is: %d", sum);
    return 0;
}