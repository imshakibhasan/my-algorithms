/**
 * @file distance_between_two_points.c
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2022-07-20
 * 
 * @copyright Copyright (c) 2022
 * problem: https://www.beecrowd.com.br/judge/en/problems/view/1015
 * 
 */

#include<stdio.h>
#include<math.h>
int main() {
    double x1, y1, x2, y2, distance;
    char ch;
    scanf("%lf%c%lf", &x1, &ch, &y1);
    scanf("%lf%c%lf", &x2, &ch, &y2);
    distance = sqrt(((x1-x2)*(x1-x2))+((y1-y2)*(y1-y2)));
    printf("%.4lf", distance);
    return 0;
}