/**
 * @file exchange.cpp
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2022-12-20
 * 
 * @copyright Copyright (c) 2022
 * problem : https://codeforces.com/problemset/problem/1765/E
 */
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while (t--) {
        long long int n, a, b, ans = 0;
        cin>>n>>a>>b;
        if (b >= a) {
            ans = n/a;
            if (n % a == 0) {
                cout<<ans<<endl;
            }
            else {
                cout<<ans+1<<endl;
            }
        }
        else {
            cout<<1<<endl;
        }
    }
}

/*
input
4
100 25 30
9999997 25 50
52 50 48
49 50 1
*/

/*
Output
4
400000
1
1
*/
//5124149 4 29