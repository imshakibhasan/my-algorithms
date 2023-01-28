/**
 * @file buy_the_string.cpp
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2023-01-29
 * 
 * @copyright Copyright (c) 2023
 * problem : https://codeforces.com/problemset/problem/1440/A
 */
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while (t--) {
        int i, n, c0, c1, h, zero = 0, one = 0, ans = 0, coin1 = 0, coin2 = 0;
        cin>>n>>c0>>c1>>h;
        char str[n];
        cin>>str;
        for (i = 0; i < n; i++) {
            if (str[i] == '0') {
                zero++;
            }
            else {
                one++;
            }
        }
        ans = (zero*c0) + (one*c1);
        coin1 = (one*h) + (n*c0);
        coin2 = (zero*h) + (n*c1);
        ans = min(ans, min(coin1, coin2));
        cout<<ans<<endl;
    }
}

/*
Input
6
3 1 1 1
100
5 10 100 1
01010
5 10 1 1
11111
5 1 10 1
11111
12 2 1 10
101110110101
2 100 1 10
00

*/

/*
Output
3
52
5
10
16
22

*/