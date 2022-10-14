/**
 * @file array_recovery.cpp
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2022-10-14
 * 
 * @copyright Copyright (c) 2022
 * problem : https://codeforces.com/problemset/problem/1739/B
 */
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    int t, i;
    cin>>t;
    for (i = 0; i < t; i++) {
        int n, j, count = 0, k, r;
        cin>>n;
        int arr[n], res[n];
        for (j = 0; j < n; j++) {
            cin>>arr[j];
            if (j == 0) {
                res[j] = arr[j];
            }
            else {
                res[j] = res[j-1] + arr[j];
            }
        }
        for (j = 0; j < n - 1; j++) {
            r = res[j] - res[j+1];
            k = abs(r);
            if (k > res[j] || k == 0) {
                count++;
            }
        }
        if (count == n-1) {
            for (j = 0; j < n; j++) {
                cout<<res[j]<<" ";
            }
            cout<<endl;
        }
        else {
            cout<<"-1"<<endl;
        }
    }
}