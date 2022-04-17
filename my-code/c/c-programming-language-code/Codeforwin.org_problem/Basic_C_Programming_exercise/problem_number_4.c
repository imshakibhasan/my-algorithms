#include <stdio.h>
int main() {
    float length, breadth, perimeter;
    
    printf("\nEnter the length of the Rectangle : ");
    scanf("%f", &length);
    
    printf("\nEnter the breadth of the Rectangle : ");
    scanf("%f", &breadth);
    
    perimeter = 2*(length + breadth);
    printf("\nPerimeter of the Rectangle is : %.2f", perimeter);
    
    return 0;
}