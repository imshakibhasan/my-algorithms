/**
 * @file pattern.c
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2022-06-10
 * 
 * @copyright Copyright (c) 2022
 * 
 * problem: https://codeforwin.org/2016/06/number-pattern-programs-in-c.html
 * 
 */

/*
//Number Pattern 1
#include<stdio.h>
int main() {
    int i, j;
    for ( i=1; i<=5; i++ ) {
        for ( j=1; j<=5; j++ ) {
            printf("1");
        }
        printf("\n");
    }
    return 0;
} */
/*
//Number Pattern 2
#include<stdio.h>
int main() {
    int i, j;
    for ( i=1; i<=5; i++ ) {
        if ( i%2==0 ) {
            for ( j=1; j<=5; j++ ) {
                printf("0");
            }
            printf("\n");
        }
        else {
            for ( j=1; j<=5; j++ ) {
                printf("1");
            }
            printf("\n");
        }
        
    }
    return 0;
}
*/


/*

//Number Pattern 3
#include<stdio.h>
int main() {
    int i, j;
    for ( i=1; i<=5; i++ ) {
        for ( j=1; j<=5; j++ ) {
            if ( j%2==0 ) {
                printf("1");
            }
            else {
                printf("0");
            }
        }
        printf("\n");
    }
    return 0;
}

*/
/*

//Number Pattern 4
#include<stdio.h>
int main() {
    int i, j;
    for ( i=1; i<=5; i++ ) {
        for ( j=1; j<=5; j++ ) {
            if ( (i>1&&i<5) && (j>1&&j<5) ) {
                printf("0");
            }
            else {
                printf("1");
            }
        }
        printf("\n");
    }
    return 0;
}
*/

/*
//Number Pattern 5
#include<stdio.h>
int main() {
    int i, j;
    for ( i=1; i<=5; i++ ) {
        for ( j=1; j<=5; j++ ) {
            if ( i==3 && j==3 ) {
                printf("0");
            }
            else {
                printf("1");
            }
        }
        printf("\n");
    }
    return 0;
}
*/

/*
//Number Pattern 6
#include<stdio.h>
int main() {
    int i, j;
    for ( i=1; i<=5; i++ ) {
        for ( j=1; j<=5; j++ ) {
            if ( (i+j)%2==0 ) {
                printf("1");
            }
            else {
                printf("0");
            }
        }
        printf("\n");
    }
    return 0;
}
*/

/*
//Number Pattern 7
#include<stdio.h>
int main() {
    int i, j;
    for ( i=1; i<=5; i++ ) {
        for ( j=1; j<=5; j++ ) {
            if ( i==3 || j==3 ) {
                printf("0");
            }
            else {
                printf("1");
            }
        }
        printf("\n");
    }
    return 0;
}
*/

/*
//Number Pattern 7
#include<stdio.h>
int main() {
    int i, j;
    for ( i=1; i<=5; i++ ) {
        for ( j=1; j<=5; j++ ) {
            if ( i==3 || j==3 ) {
                printf("0");
            }
            else {
                printf("1");
            }
        }
        printf("\n");
    }
    return 0;
}
*/


/*
//Number Pattern 8
#include<stdio.h>
int main() {
    int i, j;
    for ( i=1; i<=5; i++ ) {
        for ( j=1; j<=5; j++ ) {
            if ( i==j || j==(6-i) ) {
                printf("1");
            }
            else {
                printf("0");
            }
        }
        printf("\n");
    }
    return 0;
}
*/


/*
//Number Pattern 10
#include<stdio.h>
int main() {
    int i, j;
    for ( i=1; i<=5; i++ ) {
        for ( j=1; j<=5; j++ ) {
            printf("%d", i);
        }
        printf("\n");
    }
    return 0;
}
*/


/*
//Number Pattern 11
#include<stdio.h>
int main() {
    int i, j;
    for ( i=1; i<=5; i++ ) {
        for ( j=1; j<=5; j++ ) {
            printf("%d", j);
        }
        printf("\n");
    }
    return 0;
}
*/

/*
//Number Pattern 12
#include<stdio.h>
int main() {
    int i, j;
    for ( i=1; i<=5; i++ ) {
        for ( j=0; j<5; j++ ) {
            printf("%d", i+j);
        }
        printf("\n");
    }
    return 0;
}
*/


/*
//Number Pattern 14
#include<stdio.h>
int main() {
    int i, j;
    for ( i=5; i>0; i-- ) {
        for ( j=5; j>0; j-- ) {
            if ( i>=j ) {
                printf("%d", i);
            }
            else {
                printf("%d", j);
            }
        }
        printf("\n");
    }
    return 0;
}
*/


/*
//Number Pattern 15
#include<stdio.h>
int main() {
    int i, j;
    for ( i=5; i>0; i-- ) {
        for ( j=1; j<=5; j++ ) {
            if ( j>=i ) {
                printf("5");
            }
            else {
                printf("%d", j);
            }
        }
        printf("\n");
    }
    return 0;
}
*/


/*
//Number Pattern 16
#include<stdio.h>
int main() {
    int i, j;
    for ( i=1; i<=5; i++ ) {
        for ( j=0; j<5; j++ ) {
            if ( i+j<=5 ) {
                printf("%d", i+j);
            }
            else {
                printf("%d", 5-j);
            }
        }
        printf("\n");
    }
    return 0;
}
*/


/*
//Number Pattern 17
#include<stdio.h>
int main() {
    int i, j;
    for ( i=1; i<=5; i++ ) {
        for ( j=0; j<5; j++ ) {
            if ( i+j<=5 ) {
                printf("%d", i+j);
            }
            else {
                printf("%d", 5-j);
            }
        }
        printf("\n");
    }
    return 0;
}
*/



//Number Pattern 18
#include<stdio.h>
int main() {
    int i, j;
    for ( i=5; i>0; i-- ) {
        for ( j=0; j<i*2-1; j++ ) {
            if ( i=5 ) {
                printf("%d", i);
            }
           // else {
           //     printf("%d", 5-j);
            //}
        }
        printf("\n");
    }
    return 0;
}

