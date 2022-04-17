#include<stdio.h>
int main() {
    float length, width, area;
    printf("\nEnter Length : ");
    scanf("%f", &length);
    printf("\nEnter Width : ");
    scanf("%f", &width);
    area = length * width;
    printf("\nArea of the rectangle : %0.2f units", area);
    return 0;
}