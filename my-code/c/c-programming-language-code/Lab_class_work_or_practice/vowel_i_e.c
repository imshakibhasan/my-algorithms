#include<stdio.h>
int main() {
    char ch;
    printf("\nEnter the letter : ");
    scanf("%c", &ch);

    if (ch=='a') {
        printf("%c is a vowel\n", ch);
    }
    else if ( ch=='e') {
         printf("%c is a vowel\n", ch);
    }
    else if ( ch=='i') {
         printf("%c is a vowel\n", ch);
    }
    else if (ch =='o') {
         printf("%c is a vowel\n", ch);
    }
    else if (ch=='u') {
         printf("%c is a vowel\n", ch);
    }
    else {
         printf("%c is a consonent\n", ch);
    }
    return 0;
}