/**
 * @file cover_poibts.cpp
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2023-01-09
 * 
 * @copyright Copyright (c) 2023
 * problem : https://codeforces.com/problemset/problem/1047/B
 */
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    long long int n, x, y, t, value = 0, ans = 0;
    cin>>n;
    while (n--) {
        cin>>x>>y;
        value = x + y;
        ans = max(ans, value);
    }
    cout<<ans<<endl;
}

/*
Input
3
1 1
1 2
2 1

4
1 1
1 2
2 1
2 2
*/

/*
Output
3
4
*/