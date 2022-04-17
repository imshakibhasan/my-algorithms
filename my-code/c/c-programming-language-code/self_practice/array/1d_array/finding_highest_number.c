#include<stdio.h>
int main() {
    int i,highest,position=0, a[5];
    for (i=0; i<5; i++) {
        printf("\nEnter Elements of a[%d] : ", i);
        scanf("%d", &a[i]);
    }
        highest = a[0];
        // printf("%d\n", highest);
    for ( i=1; i<5; i++) {
        //count++;
        if (highest < a[i]) {
            highest = a[i];
            position = i;
            //printf("%d\n", highest);
        }
    }
    printf("\nHighest Value is : %d And Position is a[%d].", highest, position);
    //printf("%d", count);

    return 0;
}