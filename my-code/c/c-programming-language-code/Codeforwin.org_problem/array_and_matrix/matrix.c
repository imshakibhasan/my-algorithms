/*#include<stdio.h>
int main() {
    int i, j, n, p;
    printf("\nPlease Enter The Row of Matrix: ");
    scanf("%d", &n);
    printf("\nPlease Enter The Column of Matrix: ");
    scanf("%d", &p);

    int a[n][p], b[n][p], ans[n][p];
    for ( i=0; i<n; i++ ) {
        for ( j=0; j<p; j++ ) {
            printf("\nEnter a[%d][%d] Elements: ", i, j);
            scanf("%d", &a[i][j]);
        }
    }
    for ( i=0; i<n; i++ ) {
        for ( j=0; j<p; j++ ) {
            printf("\nEnter b[%d][%d] Elements: ", i, j);
            scanf("%d", &b[i][j]);
        }
    }
    for ( i=0; i<n; i++ ) {
        for ( j=0; j<p; j++ ) {
            ans[i][j] = a[i][j]+b[i][j];
        }
    }
    for ( i=0; i<n; i++ ) {
        for ( j=0; j<p; j++ ) {
            printf("%d\t", ans[i][j]);
        }
        printf("\n");
    }


    return 0;
}*/


//subtraction of matrix
/*#include<stdio.h>
int main() {
    int i, j, n, p;
    printf("\nPlease Enter The Row of Matrix: ");
    scanf("%d", &n);
    printf("\nPlease Enter The Column of Matrix: ");
    scanf("%d", &p);

    int a[n][p], b[n][p], ans[n][p];
    for ( i=0; i<n; i++ ) {
        for ( j=0; j<p; j++ ) {
            printf("\nEnter a[%d][%d] Elements: ", i, j);
            scanf("%d", &a[i][j]);
        }
    }
    for ( i=0; i<n; i++ ) {
        for ( j=0; j<p; j++ ) {
            printf("\nEnter b[%d][%d] Elements: ", i, j);
            scanf("%d", &b[i][j]);
        }
    }
    for ( i=0; i<n; i++ ) {
        for ( j=0; j<p; j++ ) {
            ans[i][j] = a[i][j]-b[i][j];
        }
    }
    for ( i=0; i<n; i++ ) {
        for ( j=0; j<p; j++ ) {
            printf("%d\t", ans[i][j]);
        }
        printf("\n");
    }
    return 0;
}*/

/*#include<stdio.h>
int main() {
    int i, j, k, n, p, sum;
    printf("\nPlease Enter The Row of Matrix: ");
    scanf("%d", &n);
    printf("\nPlease Enter The Column of Matrix: ");
    scanf("%d", &p);

    int a[n][p], b[n][p], ans[n][p];
    for ( i=0; i<n; i++ ) {
        for ( j=0; j<p; j++ ) {
            printf("\nEnter a[%d][%d] Elements: ", i, j);
            scanf("%d", &a[i][j]);
        }
    }
    for ( i=0; i<n; i++ ) {
        for ( j=0; j<p; j++ ) {
            printf("\nEnter b[%d][%d] Elements: ", i, j);
            scanf("%d", &b[i][j]);
        }
    }
    for ( i=0; i<n; i++ ) {
        for ( j=0; j<p; j++ ) {
            sum = 0;
            for ( k=0; k<n; k++ ) {
                sum += a[i][k]*b[k][j];
            }
            ans[i][j]=sum;
        }
    }
    for ( i=0; i<n; i++ ) {
        for ( j=0; j<p; j++ ) {
            printf("%d\t", ans[i][j]);
        }
        printf("\n");
    }
    return 0;
}*/


// lab_test_2_question_2
#include<stdio.h>
int main() {
    int i, j, row, col, sum=0;
    printf("\nPlease enter row number of Matrix: ");
    scanf("%d", &row);
    printf("\nPlease enter column number of Matrix: ");
    scanf("%d", &col);
    int a[row][col];
    for ( i=0; i<row; i++ ) {
        for ( j=0; j<col; j++ ) {
            scanf("%d", &a[i][j]);
        }
    }
    for ( i=0; i<row; i++ ) {
          sum = 0;
        for ( j=0; j<col; j++ ) {
            sum = sum+a[i][j];
        }
        printf("\nSum of row %d = %d", i+1, sum);
    }
    for ( i=0; i<col; i++ ) {
            sum=0;
        for ( j=0; j<row; j++ ) {
            sum=sum+a[j][i];
        }
    printf("\nSum of column %d = %d", i+1, sum);
    }
    return 0;
}