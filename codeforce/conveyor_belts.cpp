/**
 * @file conveyor_belts.cpp
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2023-04-05
 * 
 * @copyright Copyright (c) 2023
 * Problem : https://codeforces.com/problemset/problem/1811/B
 */
#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while (t--) {
        long long int n, x1, y1, x2, y2, p, q, ans = 0;
        long long int x, y, xx, yy;
        cin>>n>>x1>>y1>>x2>>y2;
        p = min(min(x1, y1),min(n-x1+1, n-y1+1));
        q = min(min(x2, y2), min(n-x2+1, n-y2+1));
        ans = abs(p - q);
        cout<<ans<<endl;
    }
}

/*
Input
5
2 1 1 2 2
4 1 4 3 3
8 1 3 4 6
100 10 20 50 100
1000000000 123456789 987654321 998244353 500000004
*/

/*
Output
0
1
2
9
10590032
*/