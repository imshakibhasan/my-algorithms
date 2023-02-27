/**
 * @file omkar_and_infinity_clock.cpp
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2023-02-27
 * 
 * @copyright Copyright (c) 2023
 * problem : https://codeforces.com/problemset/problem/1392/B
 */
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while (t--) {
        long long int i, n, k, d1 = -1000000001, d2 = -1000000001;
        cin>>n>>k;
        long long arr[n], res[n];
        for (i = 0; i < n; i++) {
            cin>>arr[i];
            d1 = max(d1, arr[i]);
        }
        //cout<<" d1 = "<<d1<<endl;
        for (i = 0; i < n; i++) {
            arr[i] = d1 - arr[i];
            d2 = max(d2, arr[i]);
        }
        if (k % 2 == 1) {
            for (i = 0; i < n; i++) {
                cout<<arr[i]<<" ";
            }
            cout<<endl;
        }
        else {
            for (i = 0; i < n; i++) {
                cout<<(d2-arr[i])<<" ";
            }
            cout<<endl;
        }
    }
}

/*
Input
3
2 1
-199 192
5 19
5 -1 4 2 0
1 2
69
*/

/*
Output
391 0
0 6 1 3 5
0
*/