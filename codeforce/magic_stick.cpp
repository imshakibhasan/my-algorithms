/**
 * @file magic_stick.cpp
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2023-01-13
 * 
 * @copyright Copyright (c) 2023
 * problem : https://codeforces.com/problemset/problem/1257/B
 */
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while (t--) {
        long long int x, y;
        long double ans = 0;
        cin>>x>>y;
        if (x == 1 && y > 1) {
            cout<<"NO"<<endl;
        }
        else {
            if (x <= 3 && y > 3) {
                cout<<"NO"<<endl;
            }
            else {
                cout<<"YES"<<endl;
            }
        }
    }
}