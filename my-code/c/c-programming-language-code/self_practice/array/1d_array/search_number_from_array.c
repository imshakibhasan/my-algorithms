#include<stdio.h>
int main() {
    int i, n,s_n, count=0;
    printf("\nPlease Enter The Array size/Length : ");
    scanf("%d", &n);
    int a[n]; 
    for ( i=0; i<n; i++) {
        printf("\nEnter Elements a[%d] : ", i);
        scanf("%d", &a[i]);
    }
    printf("\nPlease Enter The Number which You want to Search : ");
    scanf("%d", &s_n);
    for ( i=0; i<n; i++) {
        if ( a[i] == s_n ) {
            count++;
        }
    }
    if ( count!=0) {
        printf("'YES'  %d Is In The Array.\n And %d Times", s_n, count);
    }
    else {
        printf("'NO'  %d Is Not in The Array.\n", s_n);
    }
    return 0;
}