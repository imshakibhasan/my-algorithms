/**
 * @file gaming_forces.cpp
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2023-01-24
 * 
 * @copyright Copyright (c) 2023
 * problem : https://codeforces.com/contest/1792/problem/A
 */
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while (t--) {
        int i, n, x, one = 0, ans = 0;
        cin>>n;
        for (i = 0; i < n; i++) {
            cin>>x;
            if (x == 1) {
                one++;
            }
        }
        ans = (n-one) + ceil(one/2.0);
        cout<<ans<<endl;
    }
}
/*
Input
3
4
1 2 1 2
3
2 4 2
5
1 2 3 4 5
*/

/*
Output
3
3
5
*/