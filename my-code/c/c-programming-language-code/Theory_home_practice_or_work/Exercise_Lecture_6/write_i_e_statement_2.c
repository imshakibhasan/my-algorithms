#include<stdio.h>
int main() {
    double a, b, c;
    //a=b+c;
    printf("\nEnter Value of b : ");
    scanf("%lf", &b);

    printf("\nEnter Value of c : ");
    scanf("%lf", &c);
    a = b+c;
    if ((a<=10 && b-c>6)) {
        printf("\nRIGHT %lf %lf %lf", a, b, c);
        b = 5+(c*2);
        //s = a * b;
        if (a*b>12) {
        }
        else {
            printf("\nRIGHT_LEFT %lf %lf %lf", a, b, c);
            a = 10 - (c*c);
        }
    }
    else {
        if (c!=b) {
        printf("\nLEFT_RIGHT %lf %lf %lf", a,b,c);
        c = 5+(c*2);
        }
        else {
            printf("\nLEFR_LEFT %lf %lf %lf", a, b, c);
            b = a* (-c);
        }
        //b = a * (-c);
    }
    c = a+b;
    printf("\nFinal a = %lf, b = %lf, c = %lf", a, b, c);
    return 0;
}