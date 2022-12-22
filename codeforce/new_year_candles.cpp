/**
 * @file new_year_candles.cpp
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2022-12-22
 * 
 * @copyright Copyright (c) 2022
 * problem : https://codeforces.com/problemset/problem/379/A
 */
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    int a, b, ans = 0, res = 0, d;
    cin>>a>>b;
    ans = ans + a;
    while (a > b-1) {
        ans = ans + (a / b);
        d = a / b;
        res = a % b;
        a = d + res;
    }
    cout<<ans<<endl;
}