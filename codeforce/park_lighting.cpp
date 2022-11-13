/**
 * @file park_lighting.cpp
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2022-11-13
 * 
 * @copyright Copyright (c) 2022
 * problem : https://codeforces.com/problemset/problem/1358/A
 */
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while (t--) {
        int n, m, r;
        cin>>n>>m;
        r = n * m;
        if (r%2 == 0) {
            cout<<r/2<<endl;
        }
        else {
            cout<<(r/2)+1<<endl;
        }
    }
}