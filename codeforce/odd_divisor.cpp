/**
 * @file odd_divisor.cpp
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2022-10-14
 * 
 * @copyright Copyright (cpp) 2022
 * problem : https://codeforces.com/problemset/problem/1475/A
 */
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    int t, i;
    cin>>t;
    for (i = 0; i < t; i++) {
        long long int n, flag = 0;
        cin>>n;
        //cout<<n/2;
        if (n % 2 != 0) {
            cout<<"YES"<<endl;
            flag++;
        } 
        else {
            while (n > 2) {
                n = n / 2;
                if (n % 2 != 0) {
                    cout<<"YES"<<endl;
                    flag++;
                    break;
                }
            }
        }
        if (flag == 0) {
            cout<<"NO"<<endl;
        }
    }
}