/**
 * @file LCM_problem.cpp
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2022-11-14
 * 
 * @copyright Copyright (c) 2022
 * problem : https://codeforces.com/problemset/problem/1389/A
 */
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while (t--) {
        long long int l, r, i, flag = 0;
        cin>>l>>r;
        for (i = l; i <= r/2; i++) {
            if ((2*i) <= r) {
                cout<<i<<" "<<(2*i)<<endl;
                flag++;
                break;
            }
        }
        if (flag == 0) {
            cout<<"-1 -1"<<endl;
        }
    }
}