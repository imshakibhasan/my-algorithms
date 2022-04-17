#include<stdio.h>
void greetings1();
void greetings2(); //funtion declaration
int main() {
    char ch;
    printf("\nEnter 'M' for muslim or 'H' for Hindu : ");
    scanf("%c", &ch);
    if (ch=='M' || ch=='m') {
        greetings1(); 
    }
    else {
        greetings2(); 
    }
    // function call
    return 0;
}
// funtion definition
void greetings1() {
        printf("Assalamualikum.");
    }
void greetings2() {
        printf("Namaste.");
    }