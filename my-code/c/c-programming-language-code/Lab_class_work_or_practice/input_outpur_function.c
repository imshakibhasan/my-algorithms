#include<stdio.h>
int main() {
    char c;
    int i;
    float f;
    double d;
    
    printf("Enter the Character : ");
    scanf("%c", &c);
    printf("\nThe Entered Character is %c ", c);
    
    printf("\nEnter the Integer : ");
    scanf("%d", &i);
    printf("The Entered Integer is %d\n", i);
    
    printf("\nEnter Float number : ");
    scanf("%f", &f);
    printf("The entered floating point number is %f\n", f);
    
    printf("\nEnter the double number : ");
    scanf("%lf", &d);
    printf("The entered double number is %lf\n", d);
    
    return 0;
}