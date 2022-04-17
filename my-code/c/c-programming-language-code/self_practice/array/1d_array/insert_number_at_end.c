#include<stdio.h>
int main() {
    int i, n;
    printf("\nPlease Enter The Array size/Length : ");
    scanf("%d", &n);
    int a[n], b[n+1];
    for ( i=0; i<n; i++) {
        printf("\nEnter a[%d] Elements : ", i);
        scanf("%d", &a[i]);
    }
    printf("\nInput/Insert a number at the End of the Array : ");
    scanf("%d", &b[n]);
    for (i=0; i<(n); i++) {
        b[i] = a[i];
    }
    //printout loop
    printf("After insert a number at the end.\nThe New Array is___\n");
    for ( i=0; i<(n+1); i++) {
        printf("Elements of b[%d]= %d\n", i, b[i]);
    }
    return 0;
}