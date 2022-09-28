/**
 * @file in_search_of_an_easy_problem.c
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2022-09-04
 * 
 * @copyright Copyright (c) 2022
 * problem: https://codeforces.com/problemset/problem/1030/A
 */
#include<stdio.h>
int main() {
    int i, n, count=0;
    scanf("%d", &n);
    int arr[n];
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        if (arr[i] == 0) {
            count++;
        }
    }
    if (count == n) {
        printf("EASY");
    }
    else {
        printf("HARD");
    }
    return 0;
}