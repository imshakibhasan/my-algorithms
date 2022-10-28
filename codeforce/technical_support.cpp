/**
 * @file technical_support.cpp
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2022-10-28
 * 
 * @copyright Copyright (cpp) 2022
 * problem : https://codeforces.com/problemset/problem/1754/A
 */
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while (t--) {
        int n, i, count1 = 0, count2 = 0;
        cin>>n;
        char str[n];
        cin>>str;
        for (i = 0; i < n; i++) {
            if (str[i] == 'Q') {
                count1++;
                for (int j = i + 1; j < n; j++) {
                    if (str[j] == 'A') {
                        str[j] = '0';
                        count2++;
                        break;
                    }
                }
            }
        }
        if (count1 == count2) {
            cout<<"YES"<<endl;
        }
        else {
            cout<<"NO"<<endl;
        }
    }
}