/**
 * @file digital_root.cpp
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2023-01-10
 * 
 * @copyright Copyright (c) 2023
 * problem : https://codeforces.com/problemset/problem/1107/B
 */
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;
    while (n--) {
        long long int k, x, ans = 0;
        cin>>k>>x;
        ans = ((k-1)*9) + x;
        cout<<ans<<endl;
    }
}

/*
Input
3
1 5
5 2
3 1
*/

/*
Output
5
38
19
*/