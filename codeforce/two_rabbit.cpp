/**
 * @file two_rabbit.cpp
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2022-12-25
 * 
 * @copyright Copyright (c) 2022
 * problem : https://codeforces.com/problemset/problem/1304/A
 */
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while (t--) {
        long long int x, y, a, b, dis = 0, total = 0, ans = 0;
        cin>>x>>y>>a>>b;
        dis = y - x;
        total = a + b;
        if (dis % total == 0) {
            ans = dis / total;
            cout<<ans<<endl;
        } 
        else {
            cout<<"-1"<<endl;
        }
    }
}
/*
Input
5
0 10 2 3
0 10 3 3
900000000 1000000000 1 9999999
1 2 1 1
1 3 1 1
*/

/*
Output : 
2
-1
10
-1
1
*/