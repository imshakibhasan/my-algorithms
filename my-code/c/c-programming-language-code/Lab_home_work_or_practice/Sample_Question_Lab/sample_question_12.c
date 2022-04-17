#include<stdio.h>
int main() {
    int i , m;
    printf("\nEnter a Number to display all factors of that number : ");
    scanf("%d", &m);
    for ( i=1; i<=m; i++) {
        //printf("%d", i);
        if ( m%i==0 ) {
            printf("%d, ", i);
        }
        continue;
    }
    return 0;
}