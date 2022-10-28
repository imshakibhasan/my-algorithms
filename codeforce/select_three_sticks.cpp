/**
 * @file select_three_sticks.cpp
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2022-10-28
 * 
 * @copyright Copyright (c) 2022
 * problem : https://codeforces.com/problemset/problem/1734/A
 */
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while (t--) {
        long long int n, i, a = 0, ans = 1000000000, r, p = 0;
        cin>>n;
        long long int arr[n];
        for (i = 0; i < n; i++) {
            cin>>arr[i];
        }
        sort(arr, arr+n);
        for (i = 0; i < n - 2; i++) {
            a = arr[i] + arr[i+1] + arr[i+2];
            r = arr[i+1];
            p = abs(r-arr[i]) + abs(r-arr[i+1] + abs(r-arr[i+2]));
            ans = min(ans, p);
        }
        cout<<ans<<endl;
    }
}