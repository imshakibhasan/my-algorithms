/**
 * @file rooms_and_staircases.cpp
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2023-01-09
 * 
 * @copyright Copyright (c) 2023
 * problem : https://codeforces.com/problemset/problem/1244/B
 */
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while (t--) {
        int i, n, ans = 0;
        cin>>n;
        char arr[n];
        cin>>arr;
        for (i = 0; i <= n/2; i++) {
            if (arr[i] == '1') {
                ans = max(ans, (n-i));
            }
        }
        for (i = n-1; i >= n/2; i--) {
            if (arr[i] == '1') {
                ans = max(ans, (n - (n - 1 - i)));
            }
        }
        if (ans == 0) {
            cout<<n<<endl;
        }
        else {
            cout<<(2*ans)<<endl;
        }
    }
}