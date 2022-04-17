#include<stdio.h>
int main() {
    int a[5][5];
    int i, j;
    for ( i=0; i<4; i++) {
        for (j=0; j<(4-i); j++) {
            a[i][j]=-1;
        }
    }

    for (i=0; i<5; i++) {
        for (j=(4-i); j<5; j=5) {
            a[i][j] = 1;
        }
    }

    for (i=0; i<5; i++) {
        for (j=(5-i); j<5; j++) {
            a[i][j] = 0;
        }
    }

    for (i=0; i<5; i++) {
        for (j=0; j<5; j++) {
            printf("%d\t", a[i][j]);
        }
        printf("\n\n");
    }


    return 0;
}