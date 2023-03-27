/**
 * @file tricky_sum.cpp
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2023-03-27
 * 
 * @copyright Copyright (c) 2023
 * problem : https://codeforces.com/problemset/problem/598/A
 */
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
    int t;
    cin>>t;
    while(t--) {
        long long int n, ans, r;
        cin>>n;
        ans=n*(n+1)/2;
        r = 1;
        while(r <= n) {
            ans -= 2 * r;
            r = r * 2;
        }
        cout<<ans<<endl;
    }
}

/*
Input
2
4
1000000000
*/

/*
Output
-4
499999998352516354
*/