/**
 * @file olesya_and_rodion.cpp
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2023-01-23
 * 
 * @copyright Copyright (c) 2023
 * problem : https://codeforces.com/problemset/problem/584/A
 */
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    int i, n, t, num = 1;
    cin>>n>>t;
    if (n == 1 && t == 10) {
        cout<<"-1"<<endl;
    }
    else if (t == 10) {
        cout<<"10";
        for (i = 1; i <= n-2; i++) {
            cout<<"0";
        }
        cout<<endl;
    }
    else {
        for (i = 1; i <= n; i++) {
            cout<<t;
        }
        cout<<endl;
    }
}