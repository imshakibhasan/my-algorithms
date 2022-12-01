/**
 * @file food_for_animal.cpp
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2022-11-30
 * 
 * @copyright Copyright (c) 2022
 * problem : https://codeforces.com/problemset/problem/1675/A
 */
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while (t--) {
        long long int a, b, c, x, y, p, q;
        cin>>a>>b>>c>>x>>y;
        p = (a - x);
        q = (b - y);
        if (p < 0) {
            c = (c - abs(p));
        }
        if (q < 0) {
            c = (c - abs(q));
        }
        if (c >= 0) {
            cout<<"YES"<<endl;
        }
        else {
            cout<<"NO"<<endl;
        }
    }
}