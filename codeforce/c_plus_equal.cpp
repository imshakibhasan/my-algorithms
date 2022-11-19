/**
 * @file c_plus_equal.cpp
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2022-11-19
 * 
 * @copyright Copyright (c) 2022
 * problem : https://codeforces.com/problemset/problem/1368/A
 */
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while (t--) {
        long long int a, b, n, x = 0, count = 0;
        cin>>a>>b>>n;
        while (x <= n) {
            x = a + b;
            a = max(a, b);
            b = x;
            count++;
        }
        cout<<count<<endl;
    }
}