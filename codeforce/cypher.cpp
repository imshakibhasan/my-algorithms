/**
 * @file cypher.cpp
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2022-11-23
 * 
 * @copyright Copyright (c) 2022
 * problem : https://codeforces.com/problemset/problem/1703/C
 */
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while (t--) {
        int i, n, r;
        cin>>n;
        int arr[n], res[n];
        for (i = 0; i < n; i++) {
            cin>>arr[i];
        }
        for (i = 0; i < n; i++) {
            cin>>r;
            int count_d = 0, count_u = 0, ans = 0;
            char str[r];
            cin>>str;
            for (int j = 0; j < r; j++) {
                if (str[j] == 'D') {
                    count_d++;
                }
                else {
                    count_u++;
                }
            }
            ans = arr[i] + count_d - count_u;
            if (ans >= 0) {
                if (ans > 9) {
                res[i] = abs(10 - ans);
                }
                else {
                    res[i] = ans;
                }
            }
            else {
                if (ans < -9) {
                    res[i] = abs(10 + ans);
                }
                else {
                    res[i] = abs(10 + ans);
                }
            }
        }
        for (i = 0; i < n; i++) {
            cout<<res[i]<<" ";
        }
        cout<<endl;
    }
}