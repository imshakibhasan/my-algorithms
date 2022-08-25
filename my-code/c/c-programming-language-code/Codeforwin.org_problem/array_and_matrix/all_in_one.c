
//Write a C program to copy all elements from an array to another array.
/*#include<stdio.h>
int main() {
    int i, n;
    printf("\nPlease Enter The Array Size: ");
    scanf("%d", &n);
    int a[n], b[n];
    for ( i=0; i<n; i++ ) {
        printf("\nEnter a[%d] Elements: ", i);
        scanf("%d", &a[i]);
    }
    for (i=0; i<n; i++ ) {
        b[i]=a[i];
    }
    for (i=0; i<n; i++ ) {
        printf("%d\t", b[i]);
    }
    return 0;

}*/


//Write a C program to count total number of negative elements in an array.
/*#include<stdio.h>
int main() {
    int i, n, count=0;
    printf("\nPlease Enter The Array Size: ");
    scanf("%d", &n);
    int a[n];
    for ( i=0; i<n; i++ ) {
        printf("\nEnter a[%d] Elements: ", i);
        scanf("%d", &a[i]);
    }
    for (i=0; i<n; i++ ) {
        if ( a[i]<0 ) {
            count++;
        }
    }
    printf("\nTotal Negative Number In Array is: %d", count);
    return 0;
}*/

//Write a C program to count total number of even and odd elements in an array.
/*#include<stdio.h>
int main() {
    int i, n, count_even=0, count_odd=0;
    printf("\nPlease Enter The Array Size: ");
    scanf("%d", &n);
    int a[n];
    for ( i=0; i<n; i++ ) {
        printf("\nEnter a[%d] Elements: ", i);
        scanf("%d", &a[i]);
    }
    for (i=0; i<n; i++ ) {
        if ( a[i]%2==0 ) {
            count_even++;
        }
        else {
            count_odd++;
        }
    }
    printf("\nTotal Even Number In This Array is: %d", count_even);
    printf("\nTotal Odd Number In This Array is: %d", count_odd);
    
    return 0;
}*/

//Write a C program to find second largest element in an array.
/*#include<stdio.h>
int main() {
    int i, n, first_largest, second_largest, position;
    printf("\nPlease Enter The Array Size: ");
    scanf("%d", &n);
    int a[n];
    for ( i=0; i<n; i++ ) {
        printf("\nEnter a[%d] Elements: ", i);
        scanf("%d", &a[i]);
    }
    first_largest = 0;
    for (i=0; i<n; i++ ) {
        if ( first_largest<a[i] ) {
            first_largest = a[i];
            position = i;
        }
    }
    second_largest = 0;
    for (i=1; i<n; i++ ) {
        if ( i!= position ) {
            if ( second_largest<a[i] ) {
                second_largest = a[i];
            }
        }
    }
    printf("\nSecond Largest Number In This Array is: %d", second_largest);
    return 0;
}*/


//Write a C program to insert an element in an array.



//Write a C program to delete an element from an array at specified position.
/*#include<stdio.h>
int main() {
    int i, n, position;
    printf("\nPlease Enter The Array Size: ");
    scanf("%d", &n);
    int a[n];
    for ( i=0; i<n; i++ ) {
        printf("\nEnter a[%d] Elements: ", i);
        scanf("%d", &a[i]);
    }
    printf("\nPlease Enter The Position oF Elements You Want To Delete: ");
    scanf("%d", &position);
    for (i=1; i<n; i++ ) {
        if ( i== position ) {
            a[i]=0;
        }
    }
    for ( i=0; i<n; i++ ) {
        printf("%d\t", a[i]);
    }
    return 0;

}*/


//Write a C program to count frequency of each element in an array.
/*#include<stdio.h>
int main() {
    int i, j, n, count;
    printf("\nPlease Enter The Array Size: ");
    scanf("%d", &n);
    int a[n], feq[n];
    for ( i=0; i<n; i++ ) {
        printf("\nEnter a[%d] Elements: ", i);
        scanf("%d", &a[i]);
        feq[i]=-1;
    }
    for ( i=0; i<n; i++ ) {
        count = 1;
        for ( j=i+1; j<n; j++ ) {
            if ( a[i]==a[j] ) {
                count++;
                feq[j]=0;
            }
        }
        if ( feq[i]!=0 ) {
            feq[i] = count;
        }
    }
    for ( i=0; i<n; i++ ) {
        if ( feq[i]!=0 ) {
            printf("%d Occurs %d Times\n", a[i], feq[i]);
        }
    }
    return 0;
}*/


//Write a C program to print all unique elements in the array.
/*#include<stdio.h>
int main() {
    int i, j, n, count;
    printf("\nPlease Enter The Array Size: ");
    scanf("%d", &n);
    int a[n], feq[n];
    for ( i=0; i<n; i++ ) {
        printf("\nEnter a[%d] Elements: ", i);
        scanf("%d", &a[i]);
        feq[i]=-1;
    }
    for ( i=0; i<n; i++ ) {
        count = 1;
        for ( j=i+1; j<n; j++ ) {
            if ( a[i]==a[j] ) {
                count++;
                feq[j] = 0;
            }
        }
        if ( feq[i]!=0 ) {
            feq[i]=count;
        }
    }
    printf("\nUnique Number Is: ");
    for ( i=0; i<n; i++ ) {
        //printf("%d Occurs %d Times\n", a[i], feq[i]);
        if ( feq[i]==1 ) {
            printf("%d\t", a[i]);
        }
    }
    return 0;
}*/


//Write a C program to count total number of duplicate elements in an array.
/*#include<stdio.h>
int main() {
    int i, j, n, count, duplicate = 0;
    printf("\nPlease Enter The Array Size: ");
    scanf("%d", &n);
    int a[n];
    for ( i=0; i<n; i++ ) {
        printf("\nEnter a[%d] Elements: ", i);
        scanf("%d", &a[i]);
    }
    for ( i=0; i<n; i++) {
        count = 0;
        for ( j=i+1; j<n; j++ ) {
            if ( a[i]==a[j] ) {
                count++;
                break;
            }
        }
        if ( count!=0 ) {
            duplicate++;
        }
    }
    printf("\nTotal Number Of Duplicate is : %d", duplicate);
    return 0;
}*/


// Write a C program to delete all duplicate elements from an array.
/*#include<stdio.h>
int main() {
    int i, j, n, count, duplicate = 0;
    printf("\nPlease Enter The Array Size: ");
    scanf("%d", &n);
    int a[n];
    for ( i=0; i<n; i++ ) {
        printf("\nEnter a[%d] Elements: ", i);
        scanf("%d", &a[i]);
    }
    for ( i=0; i<n; i++) {
        count = 0;
        for ( j=i+1; j<n; j++ ) {
            if ( a[i]==a[j] ) {
                a[j]=0;
            }
        }
    }
    for ( i=0; i<n; i++ ) {
        printf("%d\t", a[i]);
    };
    return 0;
}*/


// Write a C program to merge two array to third array
#include<stdio.h>
int main() {
    int i, j, n1, n2, n;
    printf("\nPlease Enter The First Array Size: ");
    scanf("%d", &n1);
    int a[n1];
    for ( i=0; i<n1; i++ ) {
        printf("\nEnter a[%d] Elements: ", i);
        scanf("%d", &a[i]);
    }
    printf("\nPlease Enter The Second Array Size: ");
    scanf("%d", &n2);
    int b[n2];
    for ( i=0; i<n2; i++ ) {
        printf("\nEnter a[%d] Elements: ", i);
        scanf("%d", &b[i]);
    }
    n = n1+n2;
    int ans[n];
    for ( i=0; i<n1; i++ ) {
        ans[i]=a[i];
    }
    for ( j=0; j<n2; j++ ) {
        for ( i=n1; i<n; i=n) {
            ans[i]=b[j];
        }
    }
    for ( i=0; i<n; i++ ) {
        printf("%d\t", ans[i]);
    }
    return 0;
}
