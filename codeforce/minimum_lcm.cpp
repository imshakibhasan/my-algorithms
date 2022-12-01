/**
 * @file minimum_lcm.cpp
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2022-12-01
 * 
 * @copyright Copyright (c) 2022
 * problem : https://codeforces.com/problemset/problem/1765/M
 */
#include<iostream>
#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main() {
    int t;
    cin>>t;
    while (t--) {
        ll n, i, j, ans = 1000000000, ans2, p, q, lcm;
        cin>>n;
        if (n % 2 == 0) {
            cout<<n/2<<" "<<n/2<<endl;
        }
        else {
            for (i = 1; i <= n/2; i++) {
                j = n-i;
                lcm = j;
                while(1) {
                    if( lcm%i==0 && lcm%j==0 ) {
                        ans2 = lcm;
                        break;
                    }
                    lcm++;
                }
                if (ans2 <= ans) {
                    ans = ans2;
                    p = i;
                    q = j;
                }
            }
            cout<<p<<" "<<q<<endl;
        }
    }
}