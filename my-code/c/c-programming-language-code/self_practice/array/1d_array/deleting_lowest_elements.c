#include <stdio.h>
int main()
{
    int i, j, lowest, lowest_position = 0, a[5];
    for (i = 0; i < 4; i++) {
        printf("\nEnter Elements of a[%d] : ", i);
        scanf("%d", &a[i]);
    }
    
    for (i = 0; i < 4; i++) {
        lowest = a[i];
        for (j = (i + 1); j < 4; j++) {
            if (lowest > a[j]) {
                lowest = a[j];
                // lowest_position = i;
            }
        }
        a[i]=lowest;
    }

    //printf("\nLowest Value is : %d\nAnd Position is a[%d].", lowest, lowest_position);
    //a[lowest_position] = 0;
    //printf("\nAfter Delete Lowest Elements The New Array Is___\n");
    for (i = 0; i < 4; i++) {
        //printf("\nElements of a[%d] : ", i);
        printf("%d\t", a[i]);
    }

    return 0;
}