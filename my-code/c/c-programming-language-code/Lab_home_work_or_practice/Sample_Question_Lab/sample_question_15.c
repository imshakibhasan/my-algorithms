#include<stdio.h>
int main() {
    
    int annual_salary, monthly_salary;
    
    printf("\nEnter Annual Salary (an Integer number) : ");
    
    scanf("%d", &annual_salary);

    monthly_salary = annual_salary/12;
    
    printf("Monthly Salary is : %d", monthly_salary);
    
    return 0;
}