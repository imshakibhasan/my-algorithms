#include<stdio.h>
int main() {
    int n;
    printf("\nEnter an integer Number : ");
    scanf("%d", &n);
    if (n%4 == 0) {
        printf("\n%d is not the desire number.", n);
    } else if (n%6 == 0) {
        printf("\n%d is the desire number.", n);
    } else {
        printf("\n%d is not the desire number.", n);
    }
    return 0;
}