/**
 * @file design_tutorial_learn_from_math.c
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2022-08-20
 * 
 * @copyright Copyright (c) 2022
 * problem: https://codeforces.com/problemset/problem/472/A
 * 
 */
#include<stdio.h>
int main() {
    int n;
    scanf("%d", &n); 
    if (n % 2 == 0) {
        printf("%d\t%d\n", 4, n-4);
    }
    else {
        printf("%d\t%d\n", 9, n-9);
    }
    return 0;
}