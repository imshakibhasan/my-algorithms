#include<stdio.h>
int main() {
    int i, j, c;
    int a[10] = {1,2,3,4,5,6,7,8,9,10};
    //for ( i=0; i<10; i++) {
        //scanf("%d", &a[i]);
   // }
    for ( i=0; i<10; i++) {
        for ( j=(i+1); j<10; j++) {
            if ( a[i] < a[j] ) {
                c = a[i];
                a[i] = a[j];
                a[j] = c; 
                printf("At Step %d,%d Array is\n", i, j);
                for ( i=0; i<10; i++) {
                    printf("%d\t", a[i]);
                }
                printf("\n");
            }
        }
        //for ( i=0; i<10; i++) {
           //printf("%d\t", a[i]);
       // }
        //printf("\n");

    }
    for ( i=0; i<10; i++) {
       printf("%d\t", a[i]);
    }
    return 0;
}