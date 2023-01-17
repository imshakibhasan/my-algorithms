/**
 * @file pens_and_pencils.cpp
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2023-01-18
 * 
 * @copyright Copyright (c) 2023
 * problem : https://codeforces.com/problemset/problem/1244/A
 */
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()  {
    int t;
    cin>>t;
    while (t--) {
        float a, b, c, d, k, pen = 0, pencils = 0, ans = 0;
        cin>>a>>b>>c>>d>>k;
        pen = ceil(a/c);
        pencils = ceil(b/d);
        ans = pen + pencils;
        if (ans <= k) {
            cout<<pen<<" "<<pencils<<endl;
        }
        else {
            cout<<"-1"<<endl;
        }
    }
}