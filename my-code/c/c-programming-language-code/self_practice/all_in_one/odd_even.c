#include<stdio.h>
int main() {
    int p = 1, n;
    printf("Enter your value: ");
    scanf("%d", &n);
    while(n >= p ) {
        printf("%d ", n);
        n--;
        if( n % 2 == 0) {
            printf("is Odd.\n");
        }
        else{
            printf("is Even.\n");
        }
    }
    return 0;
}