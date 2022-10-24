/**
 * @file minimum_integer.cpp
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2022-10-25
 * 
 * @copyright Copyright (c) 2022
 * problem : https://codeforces.com/problemset/problem/1101/A
 */
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    int q;
    cin>>q;
    while (q--) {
        long long int l, r, d, n;
        cin>>l>>r>>d;
        if (d < l || d > r) {
            cout<<d<<endl;
        }
        else {
            n = r / d;
            cout<<((n+1)*d)<<endl;
        }
    }
}