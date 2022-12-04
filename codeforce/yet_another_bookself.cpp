/**
 * @file yet_another_bookself.cpp
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2022-12-04
 * 
 * @copyright Copyright (c) 2022
 * problem : https://codeforces.com/problemset/problem/1433/B
 */
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while (t--) {
        int n, i, flag = 0, count = 0, p = 0, pos1, pos2;
        cin>>n;
        int arr[n];
        for (i = 0; i < n; i++) {
            cin>>arr[i];
            if (arr[i] == 1) {
                p++;
            }
        }
        if (p > 1) {
            for (i = 0; i < n; i++) {
                if (arr[i] == 1) {
                    pos1 = i;
                    break;
                }
            }
            for (i = n - 1; i >= 0; i--) {
                if (arr[i] == 1) {
                    pos2 = i;
                    break;
                }
            }
            for (i = pos1 + 1; i < pos2; i++) {
                if (arr[i] == 0) {
                    count++;
                }
            }
        }
        cout<<count<<endl;
    }
}