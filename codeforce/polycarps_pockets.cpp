/**
 * @file polycrops_pockets.cpp
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2023-01-15
 * 
 * @copyright Copyright (c) 2023
 * problem : https://codeforces.com/problemset/problem/1003/A
 */
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    int i, j, n, count = 1, ans = 0;
    cin>>n;
    int arr[n];
    for (i = 0; i < n; i++) {
        cin>>arr[i];
    }
    sort(arr, arr+n);
    for (i = 0; i < n-1; i++) {
        count = 1;
        for (j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                count++;
                ans = max(ans, count);
            }
            else {
                break;
            }
        }
    }
    ans = max(ans, count);
    cout<<ans<<endl;
}

/*
Input
6
1 2 4 3 3 2

1
100
*/

/*
Output
2
1
*/