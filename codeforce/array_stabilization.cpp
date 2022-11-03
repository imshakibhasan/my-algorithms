/**
 * @file array_stabilization.cpp
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2022-11-03
 * 
 * @copyright Copyright (c) 2022
 * problem : https://codeforces.com/problemset/problem/1095/B
 */
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    int n, i, r1, r2, r;
    cin>>n;
    int arr[n];
    for (i = 0; i < n; i++) {
        cin>>arr[i];
    }
    sort(arr, arr+n);
    r1 = arr[n-1] - arr[1];
    r2 = arr[n-2] - arr[0];
    r = min(r1, r2);
    cout<<r<<endl;
}