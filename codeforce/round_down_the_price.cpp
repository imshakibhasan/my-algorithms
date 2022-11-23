/**
 * @file round_down_the_price.cpp
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2022-11-23
 * 
 * @copyright Copyright (c) 2022
 * problem : https://codeforces.com/problemset/problem/1702/A
 */
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while (t--) {
        long long int i, n, p, price = 0;
        cin>>n;
        for (i = 0; i <= 10; i++) {
            price = pow(10, i);
            if (price >= n) {
                if (price == n) {
                    p = pow(10, i);
                }
                else {
                    p = pow(10, (i-1));
                }
                break;
            }
        }
        cout<<n-p<<endl;
    }
}