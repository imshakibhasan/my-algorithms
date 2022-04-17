#include<stdio.h>
int main() {
    int a, b, c;
    printf("\nEnter Value of a: ");
    scanf("%d", &a);

    printf("\nEnter Value of b: ");
    scanf("%d", &b);

    printf("\nEnter Value of c: ");
    scanf("%d", &c);

    if (a>b) {
        if (b>c) {
            printf("\nminimum = %d , maximum = %d , median = %d", c, a, b);
        }
        else if (a>c) {
            printf("minimum = %d , maximum = %d , median = %d", b, a, c);
        }
        else {
            printf("minimum = %d , maximum = %d , median = %d", b, c, a);
        }

    }
    else if (a>c) {
            printf("minimum = %d , maximum = %d , median = %d", c, b, a);
        }
        else if (b>c) {
            printf("minimum = %d , maximum = %d , median = %d", a, b, c);
        }
        else {
            printf("minimum = %d , maximum = %d , median = %d", a, c, b);
        }
    return 0;
}