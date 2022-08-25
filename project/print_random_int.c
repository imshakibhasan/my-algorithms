/**
 * @file print_random_int.c
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2022-08-25
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main() {
    int i=0;
    clock_t start = clock();
    while (i++ <= 50000000) {
       // printf("%d\n", rand());
       
    }
    clock_t end = clock();
    double tm = (double)(end - start)/CLOCKS_PER_SEC;
    printf("%f Mili second", tm*1000);
    return 0;
}