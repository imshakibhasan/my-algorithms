#include<stdio.h>
int main() {
    double c, f;
    
    printf("\nEnter Temparature in Celcius : ");
    scanf("%lf", &c);

    f = (c*1.8) + 32;

    printf("\nTemparature in Farhenheit : %.2lf", f);
    return 0;
}
