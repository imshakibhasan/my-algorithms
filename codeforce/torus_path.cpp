/**
 * @file torus_path.cpp
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2022-12-20
 * 
 * @copyright Copyright (c) 2022
 * problem : https://codeforces.com/problemset/problem/1765/K
 */
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    long long int i, j, n, x, ans = 0, mini = 1000000000;
    cin>>n;
    //long long int arr[n][n];
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= n; j++) {
            cin>>x;
            ans = ans + x;
            if (i == (n-j)+1) {
                mini = min(mini, x);
            }
        }
    }
    cout<<ans-mini<<endl;
}