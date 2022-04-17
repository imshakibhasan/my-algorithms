//Matrix addition and subtraction

#include <stdio.h>

int main() {
    int i,j,matrix1[3][3], matrix2[3][3];
    printf("Please enter values for matrix1 \n");
    for(i=0;i<3;i++) {
        for(j=0;j<3;j++) {
            printf("(%d,%d) =  ",i,j);
            scanf("%d",&matrix1[i][j]);
        }
    }
    printf("\n\n Matrix1....\n");
    for(i=0;i<3;i++) {
        for(j=0;j<3;j++) {
            printf("%d  ",matrix1[i][j]);
        }
        printf("\n");
    }
    
    printf("Please enter values for matrix2 \n");
    for(i=0;i<3;i++) {
        for(j=0;j<3;j++) {
            printf("(%d,%d) =  ",i,j);
            scanf("%d",&matrix2[i][j]);
        }
    }
    printf("\n\n Matrix2....\n");
    for(i=0;i<3;i++) {
        for(j=0;j<3;j++) {
            printf("%d  ",matrix2[i][j]);
        }
        printf("\n");
    }
    
    printf("After addition of matrix1 and matrix2 \n\n");
    int resultMatrix[3][3];
    
    for(i=0;i<3;i++) {
        for(j=0;j<3;j++) {
            resultMatrix[i][j] = matrix1[i][j]+matrix2[i][j];
        }
    }
    
    for(i=0;i<3;i++) {
        for(j=0;j<3;j++) {
           printf(" %d  ",resultMatrix[i][j]);  
        }
        printf("\n");
    }
    
    
    printf("After subtraction of matrix1 and matrix2 \n\n");
    for(i=0;i<3;i++) {
        for(j=0;j<3;j++) {
            resultMatrix[i][j] = matrix1[i][j]-matrix2[i][j];
        }
    }
    
    for(i=0;i<3;i++) {
        for(j=0;j<3;j++) {
           printf(" %d  ",resultMatrix[i][j]);  
        }
        printf("\n");
    }
    
    return 0;
}