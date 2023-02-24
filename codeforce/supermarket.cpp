/**
 * @file supermarket.cpp
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2023-02-24
 * 
 * @copyright Copyright (c) 2023
 * problem : https://codeforces.com/problemset/problem/919/A
 */
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    int i, n, m;
    double ans = 1000000000;
    cin>>n>>m;
    for (i = 0; i < n; i++) {
        double a, b, per_kilo = 0, cost = 0;
        cin>>a>>b;
        per_kilo = a / b;
        cost = per_kilo * m;
        ans = min(ans, cost);
    }
    printf("%.8lf\n", ans);
}

/*
Input
3 5
1 2
3 4
1 3

2 1
99 100
98 99

*/

/*
Output
1.66666667

0.98989899
*/

