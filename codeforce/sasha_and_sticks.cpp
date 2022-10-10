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
    long long int n, k, r;
    scanf("%lld%lld", &n, &k);
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
/*
#include<stdio.h>
int main() {
    long int n, k, sasha = 0, friends = 0;
    scanf("%ld%ld", &n, &k);
    printf("%ld\t%ld\n", n, k);
    if (n <= k) {
        printf("YES");
    }
    else {
        for (int i=0; n >= k; i++) {
            n = n - k;
            if (i%2 == 0) {
               sasha++;
            }
            else {
                friends++;
            }
        }
        if (sasha > friends) {
            printf("Yes");
        }
        else {
            printf("NO");
        }
    }
    
    return 0;    
}
*/
//963577813436662285 206326039287271924
//251656215122324104 164397544865601257
//963577813436662285 206326039287271924
/*
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
    

#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;

int main()
{
    long long int n, k, sasha = 0, lina = 0;
    scanf("%lld %lld", &n, &k);

    int test = n / k;
    if(test % 2 == 0) printf("NO\n");
    else printf("YES\n");
}
*/