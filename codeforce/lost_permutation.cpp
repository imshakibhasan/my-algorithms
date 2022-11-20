/**
 * @file lost_permutation.cpp
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2022-11-18
 * 
 * @copyright Copyright (c) 2022
 * problem : https://codeforces.com/contest/1759/problem/B
 */
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while (t--) {
        int m, s, i, sum = 0, r = 0, maxi = 0, p = 0;
        cin>>m>>s;
        for (i = 0; i < m; i++) {
            int x;
            cin>>x;
            sum = sum + x;
            if ( x > maxi) {
                maxi = x;
            }
        }
        p = (maxi*(maxi+1))/2;
        sum = sum + s;
        sum = sum - p;
        if (sum == 0) {
            cout<<"YES"<<endl;
        }
        else if (sum < 0) {
            cout<<"NO"<<endl;
        }
        else {
            i = maxi+1;
            while (1) {
                r = sum - i;
                if (r == 0) {
                    cout<<"YES"<<endl;
                    break;
                }
                else if (r < 0) {
                    cout<<"NO"<<endl;
                    break;
                }
                i++;
            }
        }
    }
}