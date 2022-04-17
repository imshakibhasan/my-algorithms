#include<stdio.h>
int main() {
    int i,sum=0, a[10];
    float ave;
    for(i=0; i<10; i++) {
        printf("\nEnter a Number : ");
        scanf("%d", &a[i]);
    }
    for( i=0; i<10; i++) {
       //printf("%d\n", a[i]);
       sum +=a[i];
    }
    ave = sum/10.0;
    printf("Summation is : %d\n Average is : %.2f ", sum, ave);
    return 0;
}