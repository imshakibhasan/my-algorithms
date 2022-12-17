/**
 * @file vasya_and_socks.cpp
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2022-12-17
 * 
 * @copyright Copyright (c) 2022
 * problem : https://codeforces.com/problemset/problem/460/A
 */
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    int i, n, m;
    cin>>n>>m;
    for (i = 1; m*i <= n; i++) {
        n++;
    }
    cout<<n<<endl;
}