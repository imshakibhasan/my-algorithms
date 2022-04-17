#include<stdio.h>
int main() {
    float u, total_bill, o;
    printf("\nEnter Uses of Electricity Units : ");
    scanf("%f", &u);

    if (u<200) {
        total_bill = u * 5.00;
        printf("\nTotal Electricity Bill is : %.2f", total_bill);
    }
    else if (u<300) {
        o = u-199;
        total_bill = (199*5.00) + (o*10.00);
        printf("\nTotal Electricity Bill is : %.2f", total_bill);
    }
    else {
        o = u-300;
        total_bill = (199*5.00) + (100*10) + (o*15);
        printf("\nTotal Electricity Bill is : %.2f", total_bill);
    }
    return 0;
}