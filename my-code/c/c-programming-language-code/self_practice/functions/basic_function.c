#include<stdio.h>
void print(); //function declaration/prototype
int sum(int n, int p, int c); //function declaration/prototype
int main() {
    int a, b,d;
    printf("\nPlease Enter 2 Numbers to Find Summation : ");
    scanf("%d%d%d", &a,&b,&d);
    print(); //function call
    sum(a,b,d);
    //printf("%d", sum(a,b,d)); //function call in printf function
    //int d = sum(a,b);
    //printf("%d", result);

    return 0;
}
//function definition
void print() {
    printf("Hello World!\n");
    return;
}
//function definition
int sum(int n, int p, int c) {
    c = n + p;
    printf("%d", c);
    return 0;
}