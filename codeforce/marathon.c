/**
 * @file marathon.c
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2022-08-31
 * 
 * @copyright Copyright (c) 2022
 * problem: https://codeforces.com/contest/1692/problem/A
 */
#include<stdio.h>
int main() {
    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++) {
        int arr[4], count = 0;
        for(int j = 0; j < 4; j++) {
            scanf("%d", &arr[j]);
        }
        for (int j = 1; j < 4; j++) {
            if (arr[0] < arr[j]) {
                count++;
            }
        }
        printf("%d\n", count);
    }
    return 0;
}