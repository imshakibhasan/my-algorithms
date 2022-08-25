/**
 * @file Salary_with_bonus.c
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2022-04-28
 * 
 * @copyright Copyright (c) 2022
 * 
 * problem: https://www.beecrowd.com.br/judge/en/problems/view/1009
 * 
 */
#include<stdio.h>
int main() {
    char name[10];
    for ( int i=0; i<10; i++ ) {
        scanf("%c", &name[i]);
    }
    double salary, total_sell;
    scanf("%lf%lf", &salary, &total_sell);
    for ( int i=0; i<10; i++ ) {
        printf("%c", name[i]);
    }
    printf("\nTOTAL = R$ %.2lf\n", salary+((total_sell*15)/100));
    return 0;
}