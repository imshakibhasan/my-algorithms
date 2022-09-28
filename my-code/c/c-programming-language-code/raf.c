/*#include <stdio.h>
int main() {
    float usage_unit = 350, total_tk, over_use;
    //printf("\nEnter Your Usages Electricity Unit : ");
    //scanf("%f", &usage_unit);
    if (usage_unit<200) {
        total_tk = usage_unit*5.00;
        printf("\nTotal Electricity Bill is : %.2f", total_tk);
    }
    else if (usage_unit<300) {
        over_use = usage_unit - 199;
        total_tk = (over_use*10)+ (199 * 5.00);
        printf("\nTotal Electricity Bill is : %.2f", total_tk);
    }
    else {
        over_use = usage_unit - 299;
        total_tk = (199*5.00) + (100*10) + (over_use*15.00);
        printf("\nTotal Electricity Bill is : %.2f", total_tk);
    }
    return 0;
}*/
 /*
 #include<stdio.h>
int main() {
    int a[5][5];
    int i, j;
    for ( i=0; i<=4; i++) {
        for (j=0; j<(4-i); j++) {
            a[i][j]=-1;
        }
    }

    for (i=0; i<5; i++) {
        for (j=(4-i); j<5; j++) {
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
*/

/**
 * @file  divisibility_problem.c
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2022-04-14
 * 
 * @copyright Copyright (c) 2022
 * problem: https://codeforces.com/problemset/problem/1328/A
 * 
 */
/*#include<stdio.h>
int main() {
    int i=0, h, n, p, count;
    printf("\nPlease Enter How Many Case You Want to Check : ");
    scanf("%d", &h);
    int a[2*h];
    for ( i=0; i<(2*h); i++) {
        scanf("%d", &a[i]);
    }
    for ( i=0; i<(2*h); i=i+2 ) {
        n = a[i];
        p = a[i+1];
        count = 0;
        if ( n%p==0 ) {
            printf("0\n");
        }
        else if ( n>p ) {
                while( n%p!=0 ) {
                    count++; 
                    n++;                       
                }
                printf("%d\n", count);
            }
        else {
            count = p - n;
            printf("%d\n", count);
        }
    }
    return 0;
}

#include<stdio.h>
struct project {
    char first_name[30];
    char last_name[30];
    char user_name[30];
    char password[33];
};
int main() {
    struct project p1;
    FILE *file;
    file = fopen("text.txt", "w");
    scanf("%s\n", p1.first_name);
    scanf("%s\n", p1.last_name);
    scanf("%s\n", p1.user_name);
    scanf("%s\n", p1.password);
}
*/
#include<stdio.h>
int main() {
    int n, last_digit;
    scanf("%d", &n);
    printf("%d\t", n);
    while (n > 0) {
        last_digit = n % 10;
        printf("%d\t", last_digit);
        n = n / 10;
    }
    return 0;
}
