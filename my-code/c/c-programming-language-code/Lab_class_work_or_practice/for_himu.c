#include<stdio.h>
int main() {
    float U, Total_tk, n;
    printf("Enter Units : \n");
    scanf("%f", &U);

    if (U<200) {
        Total_tk = U * 5.00;
        printf("\nTotal Electricity Bill is : %.2f", Total_tk);
    }
    else if (U<300) {
        n = U-199;
        Total_tk = (199*5.00) + (n*10.00);
        printf("\nTotal Electricity Bill is : %.2f", Total_tk);
    }
    else {
        n = U-300;
        Total_tk = (199*5.00) + (100*10) + (n*15);
        printf("\nTotal Electricity Bill is : %.2f", Total_tk);
    }
    return 0;
}