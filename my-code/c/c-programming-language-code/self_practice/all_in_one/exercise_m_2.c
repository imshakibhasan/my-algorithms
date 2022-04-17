#include<stdio.h>
int main() {
    int i=1, n,j, factorial=1;
    double sum = 0.0;
    printf("\n Enter an Integer Number : ");
    scanf("%d", &n);
    for ( i=1 ; i<=n ; i++ ) {
        if ( i%2 == 0) {
            //for (j=1; j<=i; j++) {
              //  factorial = factorial * j;
            //}
            sum = sum - (1/i);
        }
        else {
            //for (j=1; j<=i; j++) {
              //  factorial = factorial * j;
            //}
             sum = sum + (1.0/i);
        }
    }
    printf("summation is : %lf", sum); 
    return 0;
}