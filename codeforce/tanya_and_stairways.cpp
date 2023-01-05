/**
 * @file tanya_and_stairways.cpp
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2023-01-05
 * 
 * @copyright Copyright (c) 2023
 * problem : https://codeforces.com/problemset/problem/1005/A
 */
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    int i, n, count = 0, ans = 1;
    cin>>n;
    int arr[n];
    for (i = 0; i < n; i++) {
        cin>>arr[i];
    }
    for (i = 0; i < n - 1; i++) {
        if (arr[i] >= arr[i+1]) {
            ans++;
        } 
    }
    cout<<ans<<endl;
    for (i = 0; i < n-1; i++) {
        if (arr[i] >= arr[i+1]) {
            cout<<arr[i]<<" ";
        }
    }
    cout<<arr[n-1]<<endl;
}