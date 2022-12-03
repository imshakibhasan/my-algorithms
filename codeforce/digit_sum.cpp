/**
 * @file digit_sum.cpp
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2022-12-03
 * 
 * @copyright Copyright (c) 2022
 * problem : https://codeforces.com/problemset/problem/1553/A
 */
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    int t, ans;
    cin>>t;
    while (t--) {
        long long int n;
        cin>>n;
        ans = n / 10;
        if (n%10 == 9) {
            ans++;
        }
        cout<<ans<<endl;
    }
}