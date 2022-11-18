/**
 * @file do_not_be_distracted.cpp
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2022-11-18
 * 
 * @copyright Copyright (c) 2022
 * problem : https://codeforces.com/problemset/problem/1520/A
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
        char str[n];
        cin>>str;
        for (i = 0; i < n - 1; i++) {
            for (int j = i + 1; j < n; j++) {
                if (str[i] == str[j]) {
                    if (abs(i-j) != 1) {
                        flag++;
                        break;
                    }
                    break;
                }
            }
            if (flag > 0) {
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