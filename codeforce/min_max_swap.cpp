/**
 * @file min_max_swap.cpp
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2023-02-18
 * 
 * @copyright Copyright (c) 2023
 * problem : https://codeforces.com/problemset/problem/1631/A
 */
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while (t--) {
        int i, n, maxi = 0, mini = 10001, ans = 0;
        cin>>n;
        pair<int, int>arr[n];
        for (i = 0; i < n; i++) {
            cin>>arr[i].first;
        }
        for (i = 0; i < n; i++) {
            cin>>arr[i].second;
        }
        //sort(arr, arr+n);
        for (i = 0; i < n; i++) {
            if (arr[i].second < arr[i].first) {
                swap(arr[i].first, arr[i].second);
            }
        }
        sort(arr, arr+n);
        mini = arr[n-1].first;
        for (i = 0; i < n; i++) {
            if (arr[i].second > maxi) {
                maxi = arr[i].second;
            }
        }
        ans = maxi * mini;
        cout<<ans<<endl;
    }
}

/*
Input
3
6
1 2 6 5 1 2
3 4 3 2 2 5
3
3 3 3
3 3 3
2
1 2
2 1
*/

/*
Output
18
9
2
*/