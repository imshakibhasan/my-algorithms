#include<stdio.h>
int main() {
    int i, n, count_i=0, count_d=0;
    printf("Please Enter Array Size/Length : \n");
    scanf("%d", &n);
    int a[n];
    //input loop
    for ( i=0; i<n; i++ ) {
        printf("Enter a[%d] Elements : \n", i);
        scanf("%d", &a[i]);
    }
    for ( i=0; i<(n-1); i++) {
        if ( a[i] > a[i+1] ) {
            count_i++;
        }
        else {
            count_d++;
        }
    }
    if (count_i==(n-1) ) {
        printf("The Array is Sorted And Decreasing.\n");
    }
    else if ( count_d == (n-1) ) {
        printf("The Array is Sorted and Increasing.\n");
    }
    else {
        printf("The Array is Not Sorted.\n");
    }
    return 0;
}