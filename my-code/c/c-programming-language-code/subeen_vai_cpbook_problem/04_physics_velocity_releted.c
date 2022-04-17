#include<stdio.h>
int main() {
    
    double v, t, d;
    
    printf("\nEnter Velocity(in meter per second) : ");
    
    scanf("%lf", &v);

    printf("\nEnter Time(in second) : ");
    
    scanf("%lf", &t);
    
    d = 2*t*v;
    
    printf("\nDistance in T time : %.2lf", d);
    
    return 0;
    
}