#include<stdio.h>
int main() {
    int a, n;
    char i;
    printf("\nEnter an integer number( indicates lines) : ");
    scanf("%d", &n);
    for ( a=1; a<=n; a++) {
    for ( i = 'A'; i<='z'; i++) {
        
        printf("%c%c", i, i);
    }
    printf("\n");
    }
    return 0;
}