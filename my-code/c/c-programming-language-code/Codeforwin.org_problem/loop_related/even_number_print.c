#include<stdio.h>
int main() {
    int a =1, n = 100;
   // printf("\nEnter an Integer Number : ");
   // scanf("%d", &n);
    while(a<=n) {
        if( a%2==0 ) {
            printf("%d\n", a);
        }
        a=a+1;
    }
    return 0;
}