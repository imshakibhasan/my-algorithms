/**
 * @file atillas_favorate_problem.cpp
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2022-11-21
 * 
 * @copyright Copyright (c) 2022
 * problem : https://codeforces.com/contest/1760/problem/B
 */
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while (t--) {
        int i, n;
        cin>>n;
        char ch = 'a', str[n];
        cin>>str;
        for (i = 0; i < n; i++) {
            if (str[i] > ch) {
                ch = str[i];
            }
        }
        cout<<ch-96<<endl;
    }
}