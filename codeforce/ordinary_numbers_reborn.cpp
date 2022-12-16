/**
 * @file ordinary_numbers_reborn.cpp
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2022-12-13
 * 
 * @copyright Copyright (c) 2022
 * problem : https://codeforces.com/problemset/problem/1520/B
 */
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while (t--) {
        long long int n, count = 0, p, q, first_divisor = 1, ans = 0;
        cin>>n;
        p = n;
        while (p > 0) {
            p = p / 10;
            count++;
        }
        q = count;
        while (count > 1) {
            first_divisor = (first_divisor * 10) + 1;
            count--;
        }
        ans = n / first_divisor;
        ans = ans + (q-1)*9;
        cout<<ans<<endl;
    }
}