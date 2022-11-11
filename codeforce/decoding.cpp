/**
 * @file decoding.cpp
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2022-11-11
 * 
 * @copyright Copyright (c) 2022
 * problem : https://codeforces.com/problemset/problem/746/B
 */
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    int i, n, length;
    cin>>n;
    char str[n];
    cin>>str;
    length = strlen(str);
    if (length == 2) {
        cout<<str<<endl;
    }
    if (length%2 == 0 && length > 2) {
        for (i = length - 2; i >= 0; i = i - 2) {
            cout<<str[i];
        }
        for (i = 1; i < length; i = i + 2) {
            cout<<str[i];
        }
        cout<<endl;
    }
    if (length % 2 != 0) {
        for (i = length - 2; i >= 0; i = i - 2) {
            cout<<str[i];
        }
        for (i = 0; i < length; i = i + 2) {
            cout<<str[i];
        }
        cout<<endl;
    }
}