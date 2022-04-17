#include<stdio.h>
int main() {
    int i,lowest,position=0, a[5];
    for (i=0; i<5; i++) {
        printf("\nEnter Elements of a[%d] : ", i);
        scanf("%d", &a[i]);
    }
        lowest = a[0];
        // printf("%d\n", highest);
    for ( i=1; i<5; i++) {
        //count++;
        if (lowest > a[i]) {
            lowest = a[i];
            position = i;
            //printf("%d\n", highest);
        }
    }
    printf("\nLowest Value is : %d And Position is a[%d].", lowest, position);
    //printf("%d", count);

    return 0;
}