/**
 * @file a_+_b_trial_problem.cpp
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2023-01-29
 * 
 * @copyright Copyright (c) 2023
 * problem : https://codeforces.com/problemset/problem/1351/A
 */
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while (t--) {
        int a, b, ans = 0;
        cin>>a>>b;
        ans = a + b;
        cout<<ans<<endl;
    }
}

/*
Input
4
1 5
314 15
-99 99
123 987
*/

/*
Output
6
329
0
1110
*/