/**
 * @file maximal_continuous_rest.cpp
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2022-11-03
 * 
 * @copyright Copyright (c) 2022
 * problem : https://codeforces.com/problemset/problem/1141/B
 */
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    int n, i, ans = 0, r = 0, flag = 0;
    cin>>n;
    int arr[n];
    for (i = 0; i < n; i++) {
        cin>>arr[i];
    }
    for (i = 0; i < n; i++) {
        if (arr[i] == 1) {
            r++;
            if (i == n-1) {
                i = -1;
                flag++;
            }
        }
        else {
            ans = max(ans, r);
            r = 0;
            if (flag > 0) {
                break;
            }
        }
    }
    ans = max(ans, r);
    cout<<ans<<endl;
}