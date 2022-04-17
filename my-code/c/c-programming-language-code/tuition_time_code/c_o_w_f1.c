#include<stdio.h>
double cal_cube(float n); //function declaration or prototype

int main() {
    float a, result;
    printf("\nPlease Enter A Number To Find It's Cube : ");
    scanf("%f", &a);
    cal_cube(a); // function call
    //result = cal_cube(a);
    //printf("Cube Is = %.2f\n", result);
    return 0;
}

// function definition
double cal_cube(float n) {
    printf("%.2f", (n*n*n));
    return 0;
}

