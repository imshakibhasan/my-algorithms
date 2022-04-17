#include<stdio.h>
int main() {
    int a, b, c;
    printf("\nPlease Enter The First Number : ");
    scanf("%d", &a);
    printf("\nPlease Enter The Second Number : ");
    scanf("%d", &b);

    printf("A = %d\nB = %d\n", a, b);
    c = a;
    a = b;
    b = c;

    printf("After Swaping A And B____\n");

    printf(" A = %d\nB = %d", a, b);
    
    return 0;
}