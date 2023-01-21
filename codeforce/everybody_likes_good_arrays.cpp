/**
 * @file everybody_likes_good_arrays.cpp
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2023-01-22
 * 
 * @copyright Copyright (c) 2023
 * problem : https://codeforces.com/contest/1777/problem/A
 */
#include<iostream>
#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main() {
    int t;
    cin>>t;
    while (t--) {
        ll i, n, odd = 0, even = 0, ans = 0;
        cin>>n;
        ll arr[n];
        for (i = 0; i < n; i++) {
            cin>>arr[i];
            if (arr[i] % 2 == 0) {
                even++;
                if (odd > 1) {
                    ans = ans + (odd - 1);
                }
                odd = 0;
            }
            if (arr[i] % 2 != 0) {
                odd++;
                if (even > 1) {
                    ans = ans + (even - 1);
                }
                even = 0;
            }
        }
        if (even > 1) {
            ans = ans + (even - 1);
        }
        if (odd > 1) {
            ans = ans + (odd - 1);
        }
        cout<<ans<<endl;
    }
}

/*Input
3
5
1 7 11 2 13
4
1 2 3 4
6
1 1 1 2 2 3
*/

/*
Output
2
0
3
*/