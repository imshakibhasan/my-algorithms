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
        cout<<"p = "<<p<<endl<<"q = "<<q<<endl;
        if (p < 0) {
            c = (c - abs(p));
            cout<<"c = "<<c<<endl;
        }
        if (q < 0) {
            c = (c - abs(q));
            cout<<"c = "<<c<<endl;
        }
        cout<<"C = "<<c<<endl;
        if (c >= 0) {
            cout<<"YES"<<endl;
        }
        else {
            cout<<"NO"<<endl;
        }
    }
}