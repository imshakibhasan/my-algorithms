/**
 * @file even_odds.cpp
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2022-12-14
 * 
 * @copyright Copyright (c) 2022
 * problem : https://codeforces.com/problemset/problem/318/A
 */
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    long long int n, k;
    cin>>n>>k;
    if (n % 2 == 0) {
        if (k <= n/2) {
            cout<<(k*2)-1<<endl;
        }
        else {
            cout<<(k - (n/2))*2<<endl;
        }
    }
    else {
        if (k <= (n/2) + 1) {
            cout<<(k*2) - 1<<endl;
        }
        else {
            cout<<(k - (n/2+1))*2<<endl;
        }
    }
}