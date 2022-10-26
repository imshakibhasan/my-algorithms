/**
 * @file square_string.cpp
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2022-10-26
 * 
 * @copyright Copyright (c) 2022
 * problem : https://codeforces.com/problemset/problem/1619/A
 */
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while (t--) {
        int length, i, flag = 0;
        char str[101];
        cin>>str;
        length = strlen(str);
        if (length%2 == 0) {
            for (i = 0; i < length/2; i++) {
                if (str[i] != str[length/2 + i]) {
                    cout<<"NO"<<endl;
                    flag++;
                    break;
                }
            }
            if (flag == 0) {
                cout<<"YES"<<endl;
            }
        }
        else {
            cout<<"NO"<<endl;
        }
    }
}