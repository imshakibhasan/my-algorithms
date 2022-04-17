#include<stdio.h>
int main() {
    int i, n;
    printf("\nPlease Enter Yout Array size/Length : ");
    scanf("%d", &n);
    int a[n];
    int count_even = 0, count_odd = 0;
    //printf("\nPlease Enter Yout Array size/Length : ");
    //scanf("%d", &n);
    for (i=0; i<n; i++) {
        printf("Please Enter a[%d] Element : ", i);
        scanf("%d", &a[i]);
    }
    for ( i=0; i<n; i++) {
        if ( a[i]%2 == 0 ) {
            count_even = count_even + 1;
        }
        else {
            count_odd = count_odd +1;
        }

    }
    printf("\n==>'%d' Even Numbers In Your Array.", count_even);
    printf("\n==>'%d' Odd Numbers In Your Array.", count_odd);
    return 0;
}