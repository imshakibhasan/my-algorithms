/**
 * @file square_counting.cpp
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2022-12-30
 * 
 * @copyright Copyright (c) 2022
 * problem : https://codeforces.com/problemset/problem/1646/A
 */
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while (t--) {
        long long int n, s, ans  = 0;
        cin>>n>>s;
        ans = n * n;
        cout<<s/ans<<endl;
    }
}
/*
Input
4
7 0
1 1
2 12
3 12
*/

/*
Output
0
1
3
1
*/