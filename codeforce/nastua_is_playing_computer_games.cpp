/**
 * @file nastua_is_playing_computer_games.cpp
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2023-01-10
 * 
 * @copyright Copyright (c) 2023
 * problem : https://codeforces.com/problemset/problem/1136/B
 */
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    int n, k, ans = 0, pos = 0;
    cin>>n>>k;
    pos = min((k-1), (n-k));
    ans = (pos * 4) + ((n-pos)*3);
    cout<<ans<<endl;
}