/**
 * @file puzzles.cpp
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2022-10-31
 * 
 * @copyright Copyright (c) 2022
 * problem : https://codeforces.com/contest/337/problem/A
 */
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    int n, m, i, ans = 1000, dif;
    cin>>n>>m;
    int arr[m];
    for (i = 0; i < m; i++) {
        cin>>arr[i];
    }
    sort(arr, arr+m);
    for (i  = 0; i < (m - n) + 1; i++) {
        dif = arr[i+(n-1)] - arr[i];
        ans = min(ans, dif);
    }
    cout<<ans<<endl;
} 