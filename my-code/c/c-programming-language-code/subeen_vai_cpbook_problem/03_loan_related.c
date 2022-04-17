#include<stdio.h>
int main() {
    float loan_amount, interest_percentage, payment_time, total_interest, total_paymet, payment_per_month;
    
    printf("\nEnter Amount of Loan : ");
    scanf("%f", &loan_amount);
    
    printf("\nEnter Percentage of interest : ");
    scanf("%f", &interest_percentage);
    
    printf("\nEnter Payment of Time(in Year) : ");
    scanf("%f", &payment_time);

    total_interest =( loan_amount* interest_percentage* payment_time ) / 100;
    
    total_paymet = loan_amount + total_interest;
    printf("\nCustomer have to pay : Tk.%.2f", total_paymet);
    
    payment_per_month = total_paymet/ (payment_time*12);
    printf("\nCustomer have to pay per month : Tk.%.2f", payment_per_month);
    
    return 0;
}