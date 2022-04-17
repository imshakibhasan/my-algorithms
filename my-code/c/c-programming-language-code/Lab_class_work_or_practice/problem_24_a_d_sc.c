#include<stdio.h>
int main() {
    char ch;
    printf("\nEnter a Character : ");
    scanf("%c", &ch);
    if ( ch >='a' && ch <='z' || ch >='A' && ch <='Z' ) {
        printf("\n %c is a alphabet", ch);
    }
    else if ( ch>='0' && ch<='9') {
        printf("\n %c is a digit", ch);
    }
    else {
        printf("\n %c is s special character", ch);
    }
    return 0 ;
}