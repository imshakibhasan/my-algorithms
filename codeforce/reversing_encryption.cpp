/**
 * @file reversing_encryption.cpp
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2022-11-06
 * 
 * @copyright Copyright (c) 2022
 * problem : https://codeforces.com/problemset/problem/999/B
 */
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    int i, j, k, n;
    cin>>n;
    char str[n];
    cin>>str;
    for (i = 1; i <= n/2; i++) {
        if (n%i == 0) {
            for (j = 0; j < i/2; j++) {
                char ch;
                ch = str[j];
                str[j] = str[i-j-1];
                str[i-j-1] = ch;
            }
        }
    }
    for (i = 0; i < n/2; i++) {
        char ch;
        ch = str[i];
        str[i] = str[n-1-i];
        str[n-1-i] = ch;
    }
    for (i = 0; i < n; i++) {
        cout<<str[i];
    }
    cout<<endl;
}