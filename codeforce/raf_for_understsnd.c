/*#include<stdio.h>
int main() {
    int i, a[4], count1, count2;
    for ( i=0; i<4; i++ ) {
        scanf("%d", &a[i])   ;
    }
    for ( i=0; i<4; i++ ) {
        if ( a[i]%2==0 ) {
            count1++;
        }
        else {
            count2++;
        }
    }
    printf("%d\t%d\t", count1,count2);
    return 0;
}*/

#include<stdio.h>
int main() {
    int i, j, k, l, m, t, max, result;
    scanf("%d", &t);
    int a[(3*t)];
    for ( i=0; i<(3*t); i++ ) {
        scanf("%d", &a[i]);
    }
    for ( j=0; j<(3*t); j= j+3 ) {
        //max = 0;
        //max = a[j];
        printf("\nj = %d", j);
        if ( a[j]!=a[j+1] || a[j]!=a[j+2] ) {
            max = a[j];
            for ( m=j+1; m<j+3; m++ ) {
                if ( max<a[m] ) {
                    max = a[m];
                }
            }
            //printf("%d\n", max);
            for ( l=j; l<(j+3); l++ ) {
                result = 0;
                result = max - a[l];
               // printf("\nl:%d", l);
                //printf("\na[l]:%d", a[l]);
                //printf("\nmax:%d", max);
                //printf("\nresult:%d\n", result);
                if ( result!=0 ) {
                    result++;
                    a[l]=result;
                }
                else {
                    a[l]=result;
                }
                //printf("%d\t", a[l]);
            }
        }
        else {
            a[j]=1;
            a[j+1]=1;
            a[j+2] =1;
        }
    }
    for ( k=0; k<(3*t); k=k+3 ) {
        printf("%d %d %d\n", a[k], a[k+1], a[k+2]);
    }
    return 0;
}
