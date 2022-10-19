/**
 * @file game_01.cpp
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2022-10-19
 * 
 * @copyright Copyright (c) 2022
 * problem : https://codeforces.com/problemset/problem/1373/B
 */
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    int t, i;
    cin>>t;
    char str[101];
    for (i = 0; i < t; i++) {
        cin>>str;
        int length = 0, j, zero = 0, one = 0, ans;
        length = strlen(str);
        for (j = 0; j < length; j++) {
            if (str[j] == '0') {
                zero++;
            }
            else {
                one++;
            }
        }
        ans = min(zero, one);
        if (ans%2 == 0) {
            cout<<"NET"<<endl;
        }
        else {
            cout<<"DA"<<endl;
        }
    }
}