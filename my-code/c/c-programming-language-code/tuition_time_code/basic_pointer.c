#include<stdio.h>
int main() {
    int a;
    int * c = &a;
    //c = &a;
    *c = 10;
    printf("%p\n", c);
    printf("%d\n", a);
    return 0;
}