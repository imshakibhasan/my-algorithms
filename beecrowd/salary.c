/**
 * @file salary.c
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2022-04-28
 * 
 * @copyright Copyright (c) 2022
 * 
 * problem: https://www.beecrowd.com.br/judge/en/problems/view/1008
 * 
 */
#include<stdio.h>
int main() {
    int employee_number, work_hours;
    double ammount_per_hour;
    scanf("%d%d%lf", &employee_number, &work_hours, &ammount_per_hour);
    printf("NUMBER = %d\n", employee_number);
    printf("SALARY = U$ %.2lf\n", work_hours*ammount_per_hour);
    return 0;
}