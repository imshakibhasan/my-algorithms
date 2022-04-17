#include<stdio.h>
int main() {
    double N, total_pay, total_charge;
    
    printf("\nEnter Transfer Amount(in dollar) :$ ");
    scanf("%lf", &N);
    
    if (N<=500) {
        total_charge = 10;
        printf("\nTransfer Charge = $%.2lf", total_charge);
        total_pay = N + total_charge;
        printf("\nTotal Payment with transfer charge = $%.2lf", total_pay);
    } 
    else if (N<=1000) {
        total_charge = 10 + ((N/100)*2);
        printf("\nCharge = $%.2lf", total_charge);
        total_pay = N + total_charge;
        printf("\nTotal Payment with transfer Charge = $%0.2lf", total_pay);
    }
    else if (1000<N<=10000) {
        total_charge =15 +((N/100)*0.1);
        printf("$= %lf", total_charge);
        printf("\nTransfer Charge = $%0.2lf", total_charge);
        total_pay = N + total_charge;
        printf("\nTotal Payment with transfer charge = $%0.2lf", total_pay);
    }
    return 0;
}