/**
 * @file young_physicist.cpp
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2022-12-13
 * 
 * @copyright Copyright (c) 2022
 * problem : https://codeforces.com/problemset/problem/69/A
 */
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    int n, ans_a = 0, ans_b = 0, ans_c = 0;
    cin>>n;
    while (n--) {
        int a, b, c;
        cin>>a>>b>>c;
        ans_a = ans_a + a;
        ans_b = ans_b + b;
        ans_c = ans_c + c;
    }
    if (ans_a == 0 && ans_b == 0 && ans_c == 0) {
        cout<<"YES"<<endl;
    }
    else {
        cout<<"NO"<<endl;
    }
}