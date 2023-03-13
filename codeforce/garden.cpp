/**
 * @file garden.cpp
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2023-03-13
 * 
 * @copyright Copyright (c) 2023
 * problem : https://codeforces.com/problemset/problem/915/A
 */
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    int i, n, k, x, ans = 101;
    cin>>n>>k;
    for (i = 0; i < n; i++) {
        cin>>x;
        if (k % x == 0) {
            ans = min(ans, (k/x));
        }
    }
    cout<<ans<<endl;
}

/*
Input
3 6
2 3 5

6 7
1 2 3 4 5 6

*/

/*
Output
2

7
*/