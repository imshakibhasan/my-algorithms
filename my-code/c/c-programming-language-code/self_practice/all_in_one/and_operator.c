#include<stdio.h>
int main() {
    char ch;
    printf("Enter a Character : ");
    scanf("%c", &ch);
    if( ch >= 'a' && ch <= 'z' ){
        printf("The Character is Lower Case.\n");
    }
    else if( ch >= 'A' && ch <= 'z'){
        printf("The Character is Upper Case.\n");
    }
    return 0;
}