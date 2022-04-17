#include<stdio.h>
int main() {
    int count;
    printf("\nEnter an Integer Number : ");
    scanf("%d", &count);
    for ( ; ; ) {
        printf("count %d\n", count);

        count +=1;

        if (count == 20) {
            break;
        }
    }
    return 0;
}