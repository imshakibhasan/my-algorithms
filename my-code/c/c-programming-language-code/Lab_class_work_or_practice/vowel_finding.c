#include<stdio.h>
int main() {
    char ch;
    printf("\nEnter the letter : ");
    scanf("%c", &ch);
    switch(ch) {
        case 'a' :
        case 'e' :
        case 'i' :
        case 'o' :
        case 'u' :
            printf("%c is a vowel\n", ch);
            break;
        default: 
             printf("%c is a consonant\n", ch);
    }
    return 0;
}