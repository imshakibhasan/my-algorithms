/**
 * @file teams_forming.cpp
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2023-01-15
 * 
 * @copyright Copyright (c) 2023
 * problem : https://codeforces.com/problemset/problem/1092/B
 */
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    int i, n, ans = 0;
    cin>>n;
    int arr[n];
    for (i = 0; i < n; i++) {
        cin>>arr[i];
    }
    sort(arr, arr+n);
    for (i = 1; i < n; i = i + 2) {
        ans = ans + (arr[i] - arr[i-1]);
    }
    cout<<ans<<endl;
}
/*
Input
6
5 10 2 3 14 5

2
1 100
*/

/*
Output
5
99*/