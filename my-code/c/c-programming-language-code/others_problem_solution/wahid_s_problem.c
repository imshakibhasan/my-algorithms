#include<stdio.h>
int main() {
    int i, n;
    scanf("%d", &n);
    int A[n], B[n], C[n];
    
    for ( i=0; i<n; i++ ) {
        scanf("%d", &A[i]);
        B[i] = A[i]*A[i];
        C[i] = B[i]*A[i];
    }
    
    printf("Input the value of n: %d\n", n);
    printf("Input the values: ");
    for ( i=0; i<n; i++ ) {
        printf("%d ", A[i]);
    }
    printf("\n");

    printf("Number     Square       Cube\n\n");
    for ( i=0; i<n; i++ ) {
        printf(" %d             %d          %d\n", A[i], B[i],C[i]);
    }
    return 0;


}