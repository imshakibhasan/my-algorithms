/**
 * @file patrick_and_shopping.c
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2022-09-28
 * 
 * @copyright Copyright (c) 2022
 * problem : https://codeforces.com/problemset/problem/599/A
 */
#include<stdio.h>
int main() {
    int d1, d2, d3, dis1, dis2;
    scanf("%d%d%d", &d1, &d2, &d3);
    dis1 = (2*d1) + (2*d2);
    dis2 = (d1 + d2 + d3);
    if (dis1 < dis2) {
        printf("%d", dis1);
    }
    else {
        printf("%d", dis2);
    }
    return 0;
}