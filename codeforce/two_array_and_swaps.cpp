/**
 * @file two_array_and_swaps.cpp
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2022-10-22
 * 
 * @copyright Copyright (c) 2022
 * problem : https://codeforces.com/problemset/problem/1353/B 
 */
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while (t--) {
        int n, k, i, j, sum = 0;
        cin>>n>>k;
        int a[n], b[n];
        for (i = 0; i < n; i++) {
            cin>>a[i];
        }
        for (i = 0; i < n; i++) {
            cin>>b[i];
        }
        sort(a, a+n);
        sort(b, b+n);
        for (i = 0; i < k; i++) {
            if (a[i] < b[n-1-i]) {
                a[i] = b[n-1-i];
            }
        }
        for (i = 0; i < n; i++) {
            sum = sum + a[i];
        }
        cout<<sum<<endl;
    }
}