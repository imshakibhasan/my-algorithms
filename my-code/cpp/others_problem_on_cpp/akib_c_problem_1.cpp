/**
 * @file akib_c_problem_1.cpp
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2023-03-13
 * 
 * @copyright Copyright (c) 2023
 * problem : Grading Scale
 */
/*
#include<stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    if (n > 100 || n < 0) {
        printf("Invalid Input");
    }
    else if (n <= 59) {
        printf("F");
    }
    else if (n <= 69) {
        printf("D");
    }
    else if (n <= 79) {
        printf("C");
    }
    else if (n <= 89) {
        printf("B");
    }
    else {
        printf("A");
    }
}
*/
/*
// Less Time Task
#include<stdio.h>
int main() {
    int ah, am, as, bh, bm, bs;
    scanf("%d%d%d%d%d%d", &ah, &am, &as, &bh, &bm, &bs);
    as = as + (ah * 60 * 60) + (am * 60);
    bs = bs + (bh * 60 * 60) + (bm * 60);
    if (as > bs) {
        printf("Task A Take More Time.\n");
    }
    else if (bs > as) {
        printf("Task B Take More Time.\n");
    }
    else {
        printf("Task A And B Take Equal Time.\n");
    }
}
*/
// Maximum Median Minimum
#include<stdio.h>
int main() {
    int a, b, c, maximum, median, minimum;
    scanf("%d%d%d", &a, &b, &c);
    if (a > b) {
        if (b > c) {
            maximum = a;
            median = b;
            minimum = c;
        }
        else if (a > c) {
            maximum = a;
            median = c;
            minimum = b;
        }
        else {
            maximum = c;
            median = a;
            minimum = b;
        }
    }
    else if (b > a) {
        if (a > c) {
            maximum = b;
            median = a;
            minimum = c;
        }
        else if (b > c) {
            maximum = b;
            median = c;
            minimum = a;
        }
        else {
            maximum = c;
            median = b;
            minimum = a;
        }
    }
    printf("Maximum = %d\nMedian = %d\nMinimum = %d\n", maximum, median, minimum);
}