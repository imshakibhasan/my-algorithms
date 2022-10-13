/**
 * @file coprime.c
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2022-10-13
 * 
 * @copyright Copyright (c) 2022
 * problem : https://codeforces.com/contest/1742/problem/D
 */
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    int t, i;
    cin>>t;
    for (i = 0; i < t; i ++) {
        int n, j, k, a, b, sum = 0, ans = 0, flag = 0;
        cin>>n;
        int arr[n];
        for (j = 0; j < n; j++) {
            cin>>arr[j];
        }
        for (j = n-1; j > 0; j--) {
            for ( k = j; k > 0; k--) {
                a = arr[j];
                b = arr[k];
                int res = min(a, b);
                while (res > 0) {
                    if (a % res == 0 && b % res == 0) {
                        break;
                    }
                    res--;
                }
                if (res == 1) {
                    sum = (j + 1) + (k + 1);
                    flag++;
                }
                ans = max(sum, ans);
            }
        }
        if (flag > 0) {
            cout<<ans<<endl;
        }
        else {
            cout<<"-1"<<endl;
        }
    }
}