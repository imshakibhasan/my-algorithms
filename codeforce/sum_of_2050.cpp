/**
 * @file sum_of_2050.cpp
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2022-12-31
 * 
 * @copyright Copyright (c) 2022
 * problem : https://codeforces.com/problemset/problem/1517/A
 */
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while (t--) {
        long long int n, m, ans = 0;
        cin>>n;
        if (n % 2050 == 0) {
            m = n / 2050;
            while (m > 0) {
                ans = ans + (m % 10);
                m = m / 10;
            }
            cout<<ans<<endl;
        }
        else {
            cout<<"-1"<<endl;
        }
    }
}

/*
Input
6
205
2050
4100
20500
22550
25308639900
*/

/*
Output
-1
1
2
1
2
36
*/