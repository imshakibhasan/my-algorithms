/*
#include<stdio.h>
int main() {
    int a;
    a = 10;
    int *b = &a;
    //printf("%p\n", &a);
    printf("%u\n", &a); //address print
    printf("%u\n", b);  //address print
    printf("%u", &b); //address print
    return 0; 
}
*/

//Value Print

#include<stdio.h>
int main() {
    int age = 22;
    int *ptr = &age;

    printf("%d\n", age);
    //printf("%u\n", &age);
    printf("%d\n", *ptr);
    printf("%d\n", *(&age));
    //printf("%d\n", age);
    return 0;
}