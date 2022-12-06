/**
 * @file frog_jumping.cpp
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2022-12-06
 * 
 * @copyright Copyright (c) 2022
 * problem : https://codeforces.com/problemset/problem/1077/A
 */
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while (t--) {
        long long int a, b , c, ans = 0;
        cin>>a>>b>>c;
        if (c%2 == 0) {
            ans = (a*(c/2)) - (b*(c/2));
            cout<<ans<<endl;
        }
        else {
            ans = (a*((c/2)+1)) - (b*(c/2));
            cout<<ans<<endl;
        }
    }
}