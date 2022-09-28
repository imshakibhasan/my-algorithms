/**
 * @file triangular_numbers.c
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2022-09-05
 * 
 * @copyright Copyright (c) 2022
 * problem: https://codeforces.com/problemset/problem/47/A
 */
#include<stdio.h>
int main() {
    int n, i, flag = 0, arr[31] = {1, 3, 6, 10, 15, 21, 28, 36, 45, 55, 66, 78, 91, 105, 120, 136, 153, 171, 190, 210, 231, 253, 276, 300, 325, 351, 378, 406, 435, 465, 496};
    scanf("%d", &n);
    for (i = 0; i < 31; i++) {
        if (n == arr[i]) {
            printf("YES");
            flag++;
            break;
        }
    }
    if (flag == 0) {
        printf("NO");
    }
    return 0;
}