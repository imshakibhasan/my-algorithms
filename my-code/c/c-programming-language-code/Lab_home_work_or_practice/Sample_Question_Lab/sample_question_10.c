#include<stdio.h>
int main() {
    char i;
    /*A = 65, ASCII CODE & n++ equal to n=n+1 and Z = 90*/
    for ( i=65; i<=90; i++ ) {
        printf("%c%c", i,i);
    }
    printf("\n");
    return 0;
}