/**
 * @file barrels.cpp
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2023-02-27
 * 
 * @copyright Copyright (c) 2023
 * problem : https://codeforces.com/problemset/problem/1430/B
 */

#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while (t--) {
        long long int i, n, k, sum = 0;
        cin>>n>>k;
        long long arr[n];
        for (i = 0; i < n; i++) {
            cin>>arr[i];
            sum = sum + arr[i];
        }
        sort(arr, arr+n);
        //sum = arr[n-1];
        if ((k+1) == n) {
            cout<<sum<<endl;
        }
        else {
            for (i = 0; i < n-k-1; i++) {
                sum = sum - arr[i];
            }
            cout<<sum<<endl;
        }
    }
}

/*
Input
2
4 1
5 5 5 5
3 2
0 0 0
*/

/*
Output
10
0
*/