/**
 * @file broken_keyboard.cpp
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2022-12-20
 * 
 * @copyright Copyright (c) 2022
 * problem : https://codeforces.com/problemset/problem/1765/B
 */
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while (t--) {
        int i, n, flag = 0;
        cin>>n;
        char arr[n];
        cin>>arr;
        for (i = 1; i < n; i = i + 3) {
            if (arr[i] != arr[i+1]) {
                flag++;
                break;
            } 
        }
        if (flag > 0) {
            cout<<"NO"<<endl;
        }
        else {
            cout<<"YES"<<endl;
        }
    }
}