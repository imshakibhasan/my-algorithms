/**
 * @file make_even.cpp
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2022-11-25
 * 
 * @copyright Copyright (c) 2022
 * problem : https://codeforces.com/problemset/problem/1611/A
 */
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while (t--) {
        int i, n, flag = 0, pos = -1;
        char str[11];
        cin>>str;
        n = strlen(str);
        if (str[n-1]%2 == 0) {
            cout<<"0"<<endl;
        }
        else {
            for (i = n-1; i >= 0; i--) {
                if (str[i]%2 == 0) {
                    flag++;
                    pos = i;
                }
            }
            if (flag > 0) {
                if (pos == 0) {
                cout<<"1"<<endl;
                }
                else {
                    cout<<"2"<<endl;
                }
            }
            else {
                cout<<"-1"<<endl;
            }
        }
    }
}