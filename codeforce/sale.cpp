/**
 * @file sale.cpp
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2022-11-11
 * 
 * @copyright Copyright (c) 2022
 * problem : https://codeforces.com/problemset/problem/34/B
 */
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    int n, m , i, sum = 0;
    cin>>n>>m;
    int arr[n];
    for (i = 0; i < n; i++) {
        cin>>arr[i];
    }
    sort(arr, arr+n);
    for (i = 0; i < m; i++) {
        if (arr[i] < 0) {
            sum = sum + abs(arr[i]);
        }
    }
    cout<<sum<<endl;
}