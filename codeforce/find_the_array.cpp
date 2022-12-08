/**
 * @file find_the_array.cpp
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2022-12-08
 * 
 * @copyright Copyright (c) 2022
 * problem : https://codeforces.com/problemset/problem/1550/A
 */
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while (t--) {
        int s, count = 1, ans = 1, a = 3, b;
        cin>>s;
        while (ans < s) {
            ans = ans + a;
            a = a + 2;
            count++;
        }
        cout<<count<<endl;
    }
}