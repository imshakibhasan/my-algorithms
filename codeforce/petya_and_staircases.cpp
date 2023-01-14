/**
 * @file petya_and_staircases.cpp
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2023-01-14
 * 
 * @copyright Copyright (c) 2023
 * problem : https://codeforces.com/problemset/problem/362/B
 */
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    long long int n, m, i, count = 1, ans = 0;
    cin>>n>>m;
    long long int arr[m];
    for (i = 0; i < m; i++) {
        cin>>arr[i];
    }
    sort(arr, arr+m);
    if (arr[0] == 1 || arr[m-1] == n) {
        cout<<"NO"<<endl;
    }
    else {
        for (i = 1; i < m; i++) {
            if ((arr[i] - arr[i-1]) == 1) {
                count++;
            }
            else {
                count = 1;
            }
            ans = max(ans, count);
        }
        if (ans >= 3) {
            cout<<"NO"<<endl;
        }
        else {
            cout<<"YES"<<endl;
        }
    }
}