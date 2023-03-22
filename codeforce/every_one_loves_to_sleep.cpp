/**
 * @file every_one_loves_to_sleep.cpp
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2023-03-22
 * 
 * @copyright Copyright (c) 2023
 * problem : https://codeforces.com/problemset/problem/1714/A
 */
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while (t--) {
        int n, H, M, sleep = 0, ans = 25000;
        cin>>n>>H>>M;
        sleep = (H*60)+M;
        while (n--) {
            int hi, mi, r = 0;
            cin>>hi>>mi;
            r = (hi * 60) + mi;
            if (r >= sleep) {
                ans = min(ans, (r - sleep));
            }
            else {
                ans = min(ans, ((1440 - sleep)+r));
            }
        }
        cout<<ans/60<<" "<<ans%60<<endl;
    }
}

/*
Input
3
1 6 13
8 0
3 6 0
12 30
14 45
6 0
2 23 35
20 15
10 30

*/

/*
Output
1 47
0 0
10 55
*/