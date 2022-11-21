/**
 * @file medium_number.cpp
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2022-11-21
 * 
 * @copyright Copyright (c) 2022
 * problem : https://codeforces.com/contest/1760/problem/A
 */
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while (t--) {
        int a, b, c, x, y;
        cin>>a>>b>>c;
        x = max(a, max(b, c));
        y = min(a, min(b, c));
        a = a + b + c;
        a = a - (x + y);
        cout<<a<<endl;
    }
}