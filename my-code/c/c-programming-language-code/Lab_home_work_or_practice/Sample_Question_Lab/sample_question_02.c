#include<stdio.h>
int main() {
    int f1, f2, next_fibonacci=0, n;
    f1 = 0;
    f2 = 1;
    printf("\nEnter the End of Fibonacci series :");
    scanf("%d", &n);
    printf("\nUn to number %d Fibonacci series is : %d, %d, ", n, f1, f2);
    next_fibonacci= f1+f2;
    
    for ( ; next_fibonacci <=n ; ) {
        
        printf("%d, ", next_fibonacci);
        
        f1 =f2;
        
        f2 = next_fibonacci;
        
        next_fibonacci=f1+f2;
    }
    return 0;
}