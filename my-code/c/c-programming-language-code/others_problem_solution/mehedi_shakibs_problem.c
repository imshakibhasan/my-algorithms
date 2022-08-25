
/*#include<stdio.h>
#include<math.h>
int main() {
    int i, n, ind, farthest;
    double far;
    scanf("%d", &n);
    int res[n];
    int index[n];
    int arr[2*n];
    for ( i=0; i<(2*n); i++ ) {
        scanf("%d", &arr[i]);
    }
    for ( i=0; i<(2*n); i=i+2 ) {
        far = sqrt((arr[i]*arr[i])+(arr[i+1]*arr[i+1]));
        res[i] = far;
        index[i] = i;
    }
    farthest = res[0];
    for( i=1;i<(2*n); i++ ) {
        if ( res[0] < res[i] ) {
           ind = i;
        }
    }
    printf("\n%d %d", arr[ind], arr[(ind+1)]);
    return 0;
}*/
/*#include<stdio.h>
int main() {
    float a[5];
    for ( int i=0; i<5; i++ ) {
        scanf("%f", &a[i]);
    }
    for ( int i=0; i<5; i++ ) {
        printf("%f\t", a[i]);
    }
    return 0;
}*/

/*#include<stdio.h>
#include<math.h>
int main() {
    int i, X, Y, n;
    scanf("%d", &n);
    double highest=0, distsnce;
    for ( i=0; i<n; i++ ) {
        int xi, yi;
        scanf("%d%d", &xi, &yi);
        distsnce = sqrt((xi*xi)+(yi*yi));
        if ( highest < distsnce ) {
            X=xi;
            Y=yi;
        }
    }
    return 0;
}*/

#include <stdio.h>
int fibo(int n);


int main()
{
    int n;
    printf("Enter any number to find nth fiboacci term: ");
    scanf("%d", &n);
    fibo(n); 
    return 0;
}

int fibo(int n) 
{
    int value;
    if(n == 0) {
        return 1;
    }
    else if(n==2|| n == 1) {
        value = 1;
       // return 0;
    }

    else {
    value = fibo(n-1) + fibo(n-2); 
    printf("%d\t", value);
    }
    return 0;
}