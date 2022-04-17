#include <stdio.h>
int main() {
    int n, last_digit, middle_digit, first_digit;
    printf("\nEnter An Integer Number Between 100 to 999 : ");
    scanf("%d", &n);
    last_digit = n%10;
    printf("%d", last_digit);
    n=n/10;
    middle_digit = n%10;
    printf("%d", middle_digit);
    n = n/10;
    first_digit = n;
    printf("%d", first_digit);
    return 0;
}