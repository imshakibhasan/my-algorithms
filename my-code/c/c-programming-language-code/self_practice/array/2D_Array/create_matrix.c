#include<stdio.h>
int main() {
    int i, j, a[2][5];
    for (i=0; i<2; i++) {
        for (j=0;j<5;j++) {
            printf("\nEnter [%d][%d] = ", i,j);
            scanf("%d", &a[i][j]);
        }
    }
    int highest = 0;

    for (i=0; i<2; i++) {
        for (j=0; j<5; j++) {
            if ( highest < a[i][j] ) {
                highest = a[i][j];
            }
        }
        printf("\n %d students Obtained Highest marks : %d ", (i+1), highest);
        highest = 0;
    }
    return 0;
}