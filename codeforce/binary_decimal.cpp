/**
 * @file binary_decimal.cpp
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2023-01-29
 * 
 * @copyright Copyright (c) 2023
 * problem : https://codeforces.com/problemset/problem/1530/A
 */
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while (t--) {
        long long int n, r = 0, ans = 0;
        cin>>n;
        while (n > 0) {
            r = n % 10;
            ans = max(ans, r);
            n = n / 10; 
        }
        cout<<ans<<endl;
    }
}

/*
Input
3
121
5
1000000000
*/

/*
Output
2
5
1
*/