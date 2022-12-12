/**
 * @file extremely_round.cpp
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2022-12-12
 * 
 * @copyright Copyright (c) 2022
 * problem : https://codeforces.com/contest/1766/problem/A
 */
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while (t--) {
        int count = 0, n, p, q, first_divisor = 1, ans = 0;
        cin>>n;
        p = n;
        while (p > 0) {
            p = p / 10;
            count++;
        }
        q = count;
        while (count > 1){
            first_divisor = first_divisor * 10;
            count--;
        }
        ans = n / first_divisor;
        ans = ans + 9 * (q - 1);
        cout<<ans<<endl;
    }
}