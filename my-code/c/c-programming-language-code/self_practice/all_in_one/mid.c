#include <stdio.h>
int main () {
    double weight, height, bmi;
    printf("\nEnter Your weight(in kg) : ");
    scanf("%lf", &weight);
    printf("\nEnter Your Height(in meter) : ");
    scanf("%lf", &height);
    bmi = weight/(height*height);
    printf("%lf", bmi);
    /*if (bmi<18.9) {
        printf("Underweight\n");
    }
    else if (bmi<24.9) {
        printf("Normal\n");
    }
    else if (bmi<29.9) {
        printf("Overweight\n");
    }
    else {
        printf("Obses\n");
    }*/
    return 0;
}