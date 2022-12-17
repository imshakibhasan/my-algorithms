/**
 * @file candies.cpp
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2022-12-17
 * 
 * @copyright Copyright (c) 2022
 * problem : https://codeforces.com/problemset/problem/1343/A
 */
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while (t--) {
        long long int i, n, a = 0;
        cin>>n;
        for (i = 2; i <= 35; i++) {
            a = pow(2, i) - 1;
            if (n % a == 0) {
                cout<<n/a<<endl;
                break;
            }
        }
    }
}