/**
 * @file jumbo_extra_cheese_2.cpp
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2022-10-29
 * 
 * @copyright Copyright (c) 2022
 * problem : https://codeforces.com/contest/1740/problem/B
 */
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while (t--) {
        long long int n, i, sum = 0, r = 0;
        cin>>n;
        long long int a[n], b[n];
        for (i = 0; i < n; i++) {
            long long int x, y;
            cin>>x>>y;
            if (x < y) {
                r = r + x;
                b[i] = y;
            }
            else {
                r = r + y;
                b[i] = x;
            }
        }
        sort(b, b+n);
        r = (2 * r);
        for (i = 0; i < n - 1; i++) {
            sum = sum + (b[i+1] - b[i]);
        }
        sum = sum + b[0] + b[n-1];
        cout<<sum+r<<endl;
    }
}