/**
 * @file expression_reborn.cpp
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
    int i, a, b , c, ans = 0, maxi = 0;
    cin>>a>>b>>c;
    ans = a + b + c;
    maxi = max(ans, maxi);
    ans = a * b * c;
    maxi = max(ans, maxi);
    ans = (a * b) + c;
    maxi = max(ans, maxi);
    ans = (b * c) + a;
    maxi = max(ans, maxi);
    ans = (a + b) * c;
    maxi = max(ans, maxi);
    ans = a * (b + c);
    maxi = max(ans, maxi);
    cout<<maxi<<endl;
}