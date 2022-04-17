#include<stdio.h>
int main() {
    double x,y;
    
    printf("\nEnter the value of points X = : ");
    scanf("%lf", &x);
    
    printf("\nEnter the value of points Y = :");
    scanf("%lf", &y);

    if (x>=0) {
        if (y>=0){
        printf("\nThis point is in Region 1 "); 
        }
        else {
        printf("\nThis point is in Region 4 ");
        }
    }
    else if (y>=0) {
        printf("\nThis point is in Region 2 ");
    }
    else {
        printf("\nThis point is in Region 3 ");
    }
    
    return 0;
}