/**
 * @file buy_a_new_shovel.c
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2022-09-12
 * 
 * @copyright Copyright (c) 2022
 * problem :https://codeforces.com/problemset/problem/732/A
 */
#include<stdio.h>
int main() {
    int k, r, i;
    scanf("%d%d", &k, &r);
    for (i = 1; i <=10; i++) {
        if (k*i%10 == 0 || (k*i%10)-r == 0) {
            printf("%d", i);
            break;
        }
    }
    return 0;
}