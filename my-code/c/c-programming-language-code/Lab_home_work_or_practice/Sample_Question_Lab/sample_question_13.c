#include<stdio.h>
int main() {
    int radious;
    float pi, volume;
    pi = 3.1416;
    printf(" Enter Radious of sphere(an integer number) : ");
    scanf("%d", &radious);
    volume = 3*pi*radious*radious*radious/4;
    printf("Volume of the sphere is : %0.2f", volume);
    return 0; 
}