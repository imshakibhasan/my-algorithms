/**
 * @file expression.cpp
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2022-12-15
 * 
 * @copyright Copyright (c) 2022
 * problem : https://codeforces.com/problemset/problem/479/A
 */
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    int i, a, b , c, ans = 0;
    cin>>a>>b>>c;
    if (a == 1 && b == 1 && c == 1) { 
        ans = a + b + c;
    }
    else if (a == 1 && (b == 1 || b != 1) && c != 1) {
        ans = (a+b) * c;
    }
    else if (a != 1 && (b != 1 || b == 1) && c == 1) {
        ans = (c + b) * a;
    }
     else if (b != 1 && a == 1 && c == 1) {
        ans = a + b + c;
    }
    else if (b == 1 && a != 1 && c != 1) {
        if (a > c) {
            ans = (c + b) * a;
        }
        else {
            ans = (a+b) * c;
        }
    }
    else {
        ans = a * b * c;
    }
    cout<<ans<<endl;
}  