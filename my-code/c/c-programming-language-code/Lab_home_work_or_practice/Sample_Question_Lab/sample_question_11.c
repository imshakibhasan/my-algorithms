#include<stdio.h>
int main() {
    int n, n1=0, largest_number;
    printf("\nEnter an Integer Number : ");
    scanf("%d", &n);

    for ( ; n>0 ; ) {
        if (n>n1) {
            largest_number = n;
        }
        else {
            largest_number=n1;
        }
        
        n1 = largest_number;
        
        printf("\nEnter an Integer Number : ");
        scanf("%d", &n);
    }
    
    
    printf("\nLargest number is : %d", largest_number);
    
    return 0;
}