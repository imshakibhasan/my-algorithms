/**
 * @file card_trick.cpp
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2023-02-20
 * 
 * @copyright Copyright (c) 2023
 * problem : https://codeforces.com/problemset/problem/1681/B
 */

#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while (t--) {
        long long int i, n, m, sum = 0, a = 0, p = 0;
        cin>>n;
        int arr[n];
        for (i = 0; i < n; i++) {
            cin>>arr[i];
        }
        cin>>m;
        int x;
        for (i = 0; i < m; i++) {
            cin>>x;
            sum = sum + x;
        }
        if (sum > n) {
            i = (sum/n);
            sum = sum - (i*n);
        }
        for (i = 0; p <= sum; i++) {
            a = arr[i];
            if (i == n-1) {
                i = -1;
            }
            p++;
        }
        cout<<a<<endl;
    }
}

/*Input
3
2
1 2
3
1 1 1
4
3 1 4 2
2
3 1
5
2 1 5 4 3
5
3 2 1 2 1
*/

/*
Output
2
3
3
*/