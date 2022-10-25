/**
 * @file sumit_s_problem,c
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2022-10-25
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include<stdio.h>
int main() {
    int i = 0, j = 0;
    do {
        do {
            printf("*");
            j++;
        }
        while (j < 5-i);
        printf("\n");
        i++;
        j = 0;
    }
    while (i < 5);
    return 0;
}