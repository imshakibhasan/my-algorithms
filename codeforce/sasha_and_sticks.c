/**
 * @file sasha_and_sticks.c
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2022-09-27
 * 
 * @copyright Copyright (c) 2022
 * problem : https://codeforces.com/problemset/problem/832/A
 */
#include<stdio.h>
int main() {
    long int n, k, r;
    scanf("%ld%ld", &n, &k);
    if (n <= k) {
        printf("YES");
    }
    else {
        r = n / k;
        if (r%2==0) {
            printf("NO");
        }
        else {
            printf("YES");
        }
    }
    return 0;    
}
//963577813436662285 206326039287271924
//251656215122324104 164397544865601257
//963577813436662285 206326039287271924