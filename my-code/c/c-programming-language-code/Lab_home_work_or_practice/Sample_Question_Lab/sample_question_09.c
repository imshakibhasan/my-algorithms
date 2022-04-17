#include<stdio.h>
int main() {
    int n;
    for ( n=1; n<=50; n++) {
        if ( n%2==1 ) {
            continue;
            }
    printf("%d\n", n);    
    }
    return 0;
}