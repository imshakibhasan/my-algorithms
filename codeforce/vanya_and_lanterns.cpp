/**
 * @file vanya_and_lanterns.cpp
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2022-12-21
 * 
 * @copyright Copyright (c) 2022
 * problem : https://codeforces.com/problemset/problem/492/B
 */
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    long long int i, n, l, maxi = 0, ans = 0;
    double res = 0;
    cin>>n>>l;
    long long int arr[n];
    for (i = 0; i < n; i++) {
        cin>>arr[i];
    }
    sort(arr, arr+n);
    maxi = max(arr[0],(l - arr[n-1]))*2;
    for (i = 0; i < n - 1; i++) {
        ans = arr[i+1] - arr[i];
        maxi = max(maxi, ans);
    }
    res = maxi/2.0;
    printf("%.10lf\n", res);
}