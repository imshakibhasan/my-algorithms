#include<stdio.h>
int main() {
    int i, n;
    int a[5], b[5], c[5];
    printf("**Input 1st Arrays All Elements----\n");
    for ( i=0; i<5; i++) {
        printf("Enter a[%d] Elements : ", i);
        scanf("%d", &a[i]);
    }
    printf("**Input 2nd Arrays All Elements----\n");
    for ( i=0; i<5; i++) {
        printf("Enter b[%d] Elements : ", i);
        scanf("%d", &b[i]);
    }

    printf("**The New Array_ Sum of 1st and 2nd Arrays----\n");
    for (i=0; i<5; i++) {
        c[i] = a[i] + b[i];
        printf("c[%d] Elements is : %d\n", i, c[i]);
    }
    return 0;
}