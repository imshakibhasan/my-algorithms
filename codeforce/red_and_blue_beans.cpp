/**
 * @file red_and_blue_beans.cpp
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2022-12-02
 * 
 * @copyright Copyright (c) 2022
 * problem : https://codeforces.com/problemset/problem/1519/A
 */
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while (t--) {
        long long int r, b, d, ans = 0;
        cin>>r>>b>>d;
        if (abs(r-b) <= d) {
            cout<<"YES"<<endl;
        }
        else if (r < b) {
            ans = (r*(d+1));
            if (ans >= b) {
                cout<<"YES"<<endl;
            }
            else {
                cout<<"NO"<<endl;
            }
        }
        else {
            ans = (b*(d+1));
            if (ans >= r) {
                cout<<"YES"<<endl;
            }
            else {
                cout<<"NO"<<endl;
            }    
        }
    }
}