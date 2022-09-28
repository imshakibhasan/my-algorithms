/**
 * @file nearly_lucky_number.c
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2022-09-01
 * 
 * @copyright Copyright (c) 2022
 * problem: https://codeforces.com/problemset/problem/110/A
 */
#include<stdio.h>
int main() {
    long long int n;
    int i, r, count=0;
    scanf("%lld", &n);
    while (n > 0) {
        r = n % 10;
        if (r == 4 || r == 7) {
            count++;
        }
        n = n / 10;
    }
    if (count == 4 || count == 7) {
        printf("YES");
    }
    else {
        printf("NO");
    }
    return 0;
}