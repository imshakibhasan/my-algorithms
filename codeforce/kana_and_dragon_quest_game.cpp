/**
 * @file kana_and_dragon_quest_game.cpp
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2022-10-21
 * 
 * @copyright Copyright (cpp) 2022
 * problem : https://codeforces.com/problemset/problem/1337/B
 */
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    int t, i;
    cin>>t;
    for (i = 0; i < t; i++)  {
        int x, n , m, M, N, ans, ans1, flag = 0;
        cin>>x>>n>>m;
        N = n;
        M = m;
        ans = ans1 = x;
        while (n-- && ans > 0) {
            ans = ans/2 + 10;
            if (ans <= 0) {
               flag++;
               break;
            }
        }
        while (m-- && ans > 0) {
            ans = ans - 10;
            if (ans <= 0) {
               flag++;
               break;
            }
        }
        while (M-- && ans1 > 0) {
            ans1 = ans1 - 10;
            if (ans1 <= 0) {
               flag++;
               break;
            }
        }
        while (N-- && ans1 > 0) {
            ans1 = ans1/2 + 10;
            if (ans1 <= 0) {
               flag++;
               break;
            }
        }
        if (flag > 0) {
            cout<<"YES"<<endl;
        }
        else {
            cout<<"NO"<<endl;
        }
    }
}