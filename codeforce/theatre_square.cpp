/**
 * @file theatre_square.cpp
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2022-12-12
 * 
 * @copyright Copyright (c) 2022
 * problem : https://codeforces.com/problemset/problem/1/A
 */
#include<stdio.h>
#include<math.h>
int main() {
    long long int n, m, a, p, q, ans;
    scanf("%lld%lld%lld", &n, &m, &a);
    if (n % a == 0) {
        p = n / a;
    }
    else {
        p = (n / a) + 1;
    }
    if (m % a == 0) {
        q = m / a;
    }
    else {
        q = (m/a) + 1;
    }
    ans = p * q;
    printf("%lld", ans);
    return 0;
}