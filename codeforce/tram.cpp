/**
 * @file tram.cpp
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2022-11-04
 * 
 * @copyright Copyright (c) 2022
 * problem : https://codeforces.com/problemset/problem/116/A
 */
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    int n, ans = 0, pa = 0;
    cin>>n;
    while (n--) {
        int x, y;
        cin>>x>>y;
        pa = (pa-x) + y;
        ans = max(pa, ans);
    }
    cout<<ans<<endl;
}