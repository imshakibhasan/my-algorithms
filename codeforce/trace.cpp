/**
 * @file trace.cpp
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2023-01-29
 * 
 * @copyright Copyright (c) 2023
 * problem : https://codeforces.com/problemset/problem/157/B
 */
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    int i, n, p;
    double ans = 0;
    cin>>n;
    int arr[n];
    for (i = 0; i < n; i++) {
        cin>>arr[i];
    }
    sort(arr, arr+n);
    p = 0;
    for (i = n -1; i >= 0; i--) {
        if (p%2 == 0) {
            ans = ans + ((pow(arr[i], 2))*3.1416926536);
        }
        else {
            ans = ans - ((pow(arr[i], 2))*3.1416926536);
        }
        p++;
    }
    printf("%.10lf\n", ans);
}

/*
Input
1
1

3
1 4 2
*/

/*
Output
3.1415926536

40.8407044967
*/