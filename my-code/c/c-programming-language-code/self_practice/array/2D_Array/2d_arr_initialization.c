#include<stdio.h>
int main() {
    int a[3][3];
    int b[3][3];
    int result[3][3];
    int result_2[3][3];
    printf("\nEnter First Matrix All Elements___");
    for ( int i=0; i<3; i++) {
         for (int j=0; j<3; j++) {
            printf("\nEnter a[%d][%d] Elements : ", i,j);
            scanf("%d", &a[i][j]);
        }
    }
    /*
    for ( int i=0; i<3; i++) {
        for (int j=0; j<3; j++) {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }
    */
    printf("\nEnter second Matrix All Elements___");
    for ( int i=0; i<3; i++) {
         for (int j=0; j<3; j++) {
            printf("\nEnter a[%d][%d] Elements : ", i,j);
            scanf("%d", &b[i][j]);
        }
    }
    
    for ( int k=0; k<3; k++) {
        for ( int l=0; l<3; l++) {
            result[k][l] = a[k][l] + b[k][l];
        }
    }
    for ( int k=0; k<3; k++) {
        for ( int l=0; l<3; l++) {
            result_2[k][l] = a[k][l] - b[k][l];
        }
    }

    printf("\n\nFirst Matrix___\n");
    for ( int i=0; i<3; i++) {
        for (int j=0; j<3; j++) {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }
    printf("\n\nsecond Matrix___\n");
    for ( int i=0; i<3; i++) {
        for (int j=0; j<3; j++) {
            printf("%d\t", b[i][j]);
        }
        printf("\n");
    }
    printf("\n\nAddition of First And Second Matrix___\n");
    for ( int k=0; k<3; k++) {
        for ( int l=0; l<3; l++) {
            printf("%d\t", result[k][l]);
        }
       printf("\n");
    }
    printf("\n\nSubtraction of First And Second Matrix___\n");
    for ( int k=0; k<3; k++) {
        for ( int l=0; l<3; l++) {
            printf("%d\t", result_2[k][l]);
        }
       printf("\n");
    }
    return 0;
}