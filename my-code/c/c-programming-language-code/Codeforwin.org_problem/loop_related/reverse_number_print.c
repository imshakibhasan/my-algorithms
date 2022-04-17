#include<stdio.h>
int main() {
    int n;
    printf("\nEnter An Integer number : ");
    scanf("%d", &n);
    while (n>=1) {
        printf("%d\n", n);
        n--;
    }
    return 0;
}