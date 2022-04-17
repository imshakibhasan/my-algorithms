#include<stdio.h>
int main() {
    char ch;
    printf("Enter a Character : ");
    scanf("%c", &ch);
    if( ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u'){
        printf("'%c' is VOWEL.", ch);
    }
    else{
        printf("'%c' is CONSONANT.", ch);
    }
    return 0;
}