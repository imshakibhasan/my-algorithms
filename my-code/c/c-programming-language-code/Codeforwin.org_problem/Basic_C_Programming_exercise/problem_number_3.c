#include <stdio.h>
int main() {
    double num1, num2, sum_addition, sum_subtraction, sum_multiplication, sum_division;
    
    printf("\nEnter a Number : ");
    scanf("%lf", &num1);
    
    printf("\nEnter another Number : ");
    scanf("%lf", &num2);
    
    sum_addition = num1 + num2;
    printf("\n\nAddition of two Numbers is : %.2lf", sum_addition);
    
    sum_subtraction = num1 - num2;
    printf("\n\nSubtraction of Two Number is : %.2lf", sum_subtraction);
    
    sum_multiplication = num1 * num2;
    printf("\n\nMultiplication of Two Number is : %.2lf", sum_multiplication);
    
    sum_division = num1 / num2;
    printf("\n\nDivision of Two Number is : %.2lf", sum_division);
    
    return 0; 
}