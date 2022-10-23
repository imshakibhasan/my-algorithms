/**
 * @file polycrap_and_coins.cpp
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2022-10-22
 * 
 * @copyright Copyright (c) 2022
 * problem : https://codeforces.com/problemset/problem/1551/A
 */
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while (t--) {
        long long int n, c1, c2;
        cin>>n;
        c1 = n / 3;
        c2 = n / 3;
        if (n % 3 == 2) {
            ++c2;
        }
        else if (n % 3 == 1) {
            ++c1;
        }
        cout<<c1<<" "<<c2<<endl;
    }
}