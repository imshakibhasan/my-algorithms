/**
 * @file equidistant-letters.cpp
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2022-12-05
 * 
 * @copyright Copyright (c) 2022
 * problem : https://codeforces.com/problemset/problem/1626/A
 */
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while (t--) {
        int n;
        char str[53];
        cin>>str;
        n = strlen(str);
        sort(str, str+n);
        for (int i = 0; i < n; i++) {
            cout<<str[i];
        }
        cout<<endl;
    }
}