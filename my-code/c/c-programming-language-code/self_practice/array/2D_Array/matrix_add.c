#include <stdio.h>

int main() {
    int i,j,matrix1[3][3], matrix2[3][2], result[3][2];
    printf("Please enter values for matrix1 \n");
    for(i=0;i<3;i++) {
        for(j=0;j<3;j++) {
            printf("(%d,%d) =  ",i,j);
            scanf("%d",&matrix1[i][j]);
        }
    }
    printf("Please enter values for matrix2 \n");
    for(i=0;i<3;i++) {
        for(j=0;j<2;j++) {
            printf("(%d,%d) =  ",i,j);
            scanf("%d",&matrix2[i][j]);
        }
    }
    for ( i=0; i<3; i++) {
        for (j=0; j<2; j++) {
            result[3][2] = matrix1[i][j] + matrix2[i][j];
        }
    }
    for ( i=0; i<3; i++) {
        for (j=0; j<2; j++) {
            printf("%d\t", result[3][2]);
        }
        printf("\n");
    }
    return 0;
}
