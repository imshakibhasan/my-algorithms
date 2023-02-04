/**
 * @file array_decrements.cpp
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2023-01-21
 * 
 * @copyright Copyright (c) 2023
 * problem : https://codeforces.com/problemset/problem/1690/B
 */
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while (t--) {
        long long int i, n, ans = 0, flag = 0;
        cin>>n;
        long long int a[n], b[n];
        for (i = 0; i < n; i++) {
            cin>>a[i];
        }
        for (i = 0; i < n; i++) {
            cin>>b[i];
        }
        for (i = 0; i < n; i++) {
            ans = max(ans, (a[i] - b[i]));
        }
        for (i = 0; i < n; i++) {
            if ((a[i]-ans) > 0) {
                a[i] = a[i] - ans;
            }
            else {
                a[i] = 0;
            }
        }
        for (i = 0; i < n; i++) {
            if (a[i] != b[i]) {
                cout<<"NO"<<endl;
                flag++;
                break;;
            }
        }
        if (flag == 0) {
            cout<<"YES"<<endl;
        }
    }
}

/*
Input
6
4
3 5 4 1
1 3 2 0
3
1 2 1
0 1 0
4
5 3 7 2
1 1 1 1
5
1 2 3 4 5
1 2 3 4 6
1
8
0
1
4
6
*/

/*
Output
YES
YES
NO
NO
YES
NO
*/