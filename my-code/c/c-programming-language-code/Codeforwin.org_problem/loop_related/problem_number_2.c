#include <stdio.h>
int main() {
    double num1, num2, sum;
    printf("\nEnter a Number : ");
    scanf("%lf", &num1);
    printf("\nEnter another Number : ");
    scanf("%lf", &num2);
    sum = num1 + num2;
    printf("\nSummation of Two Number is : %.2lf", sum);
    return 0;
}