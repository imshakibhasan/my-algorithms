/**
 * @file calculating_fun.c
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2022-09-18
 * 
 * @copyright Copyright (c) 2022
 * problem : https://codeforces.com/problemset/problem/486/A
 */
#include<stdio.h>
int main() {
    long long int n;
    scanf("%lld", &n);
    if (n % 2 == 0) {
        printf("%lld", n/2);
    }
    else {
        printf("%lld", -(n/2+1));
    }
    return 0;
}
//1000000000000000