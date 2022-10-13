/**
 * @file stripes.c
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2022-10-13
 * 
 * @copyright Copyright (c) 2022
 * problem : https://codeforces.com/contest/1742/problem/C
 */
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    int t, i;
    cin>>t;
    for (i = 0; i < t; i++) {
        int j, k, count = 0, ans = 0;
        char str[8];
        for (j = 0; j < 8; j++) {
            cin>>str;
            count = 0;
            for (k = 0; k < 8; k++) {
                if (str[k] == 'R') {
                    count++;
                }
            }
            ans = max(count, ans);
        }
        
        if (ans == 8) {
            cout<<"R"<<endl;
        }
        else {
            cout<<"B"<<endl;
        }
    }
}