/**
 * @file twins.cpp
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2022-12-13
 * 
 * @copyright Copyright (c) 2022
 * problem : https://codeforces.com/problemset/problem/160/A
 */
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    int i, ans = 0, mid = 0, n, count = 0;
    cin>>n;
    int arr[n];
    for (i = 0; i < n; i++) {
        cin>>arr[i];
        mid = mid + arr[i];
    }
    sort(arr, arr+n);
    mid = mid / 2 ;
    for (i = n - 1; i >= 0; i--) {
        ans = ans + arr[i];
        count++;
        if (ans > mid) {
            cout<<count<<endl;
            break;
        }
    }
}