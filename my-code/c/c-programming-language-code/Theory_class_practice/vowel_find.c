#include<stdio.h>
int main() {
    char ch, ch1;
    while(1) {
        ch = getchar();
        //fflush;
        ch1 = getchar();
        if ( ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' || ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U') {
            printf("\n%d is Vowel\n", ch);
        }
        else {
            printf("\n%d is Consonant\n", ch);
        }
        break;
    }
    return 0;
}