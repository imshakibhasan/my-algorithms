#include<stdio.h>
int main() {
    int i, n, max, min;
    printf("\nPlease Enter The Array Size: ");
    scanf("%d", &n);
    int arr[n];
    for ( i=0; i<n; i++ ) {
        printf("\nEnter arr[%d] Elements: ", i);
        scanf("%d", &arr[i]);
    }
    max=arr[0];
    min=arr[0];
    for ( i=0; i<n; i++ ) {
        if ( max<arr[i] ) {
            max=arr[i];
        }
        if ( min>arr[i]) {
            min=arr[i];
        }
    }
    printf("Maximum Elements : %d\nMinimum Elements : %d", max,min);
    return 0;
}