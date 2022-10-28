/**
 * @file ordinary_numbers.cpp
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2022-10-27
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
        long long int n, r = 0, ans = 0, i = 10;
        cin>>n;
        if (n > 9) {
            while (1) {
                r = n / i;
                ans = ans + r;
                i = i * 10;
                if (i > n) {
                    break;
                }
            }
            cout<<ans+9<<endl;
        }
        else {
            cout<<n<<endl;
        }
    }
}