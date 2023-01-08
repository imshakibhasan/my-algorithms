/**
 * @file burglar_and_matches.cpp
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2023-01-07
 * 
 * @copyright Copyright (c) 2023
 * problem : https://codeforces.com/problemset/problem/16/B
 */


#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    long long int i, n, m, ans = 0;
    cin>>n>>m;
    pair<long long int, long long int>arr[m];
    for (i = 0; i < m; i++) {
        cin>>arr[i].second;
        cin>>arr[i].first;
    }
    sort(arr, arr+m);
    reverse(arr, arr+m);
    for (i = 0; i < m; i++) {
        if (arr[i].second <= n) {
            ans = ans + (arr[i].first * arr[i].second);
            n = n - arr[i].second;
        }
        else {
            ans = ans + (n*arr[i].first);
            n = 0;
        }
        if (n == 0) {
            break;
        }
    }
    cout<<ans<<endl;
}


/*
Input
7 3
5 10
2 5
3 6


3 3
1 3
2 2
3 1
*/

/*
Output
62

7
*/


