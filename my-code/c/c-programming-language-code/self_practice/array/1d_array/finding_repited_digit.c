#include<stdio.h>
int main() {
    int i,n, a[10]={0};
    printf("\nPlease Enter The Number : ");
    scanf("%d", &n);
    while ( n>0 ) {
        i=n%10;
        a[i]++;
        n=n/10;
    }
    for (int j=0; j<10; j++) {
        printf("\nIn your numbers %d is use : ", j);
        printf("%d times.\n", a[j]);
    }
    return 0;
}