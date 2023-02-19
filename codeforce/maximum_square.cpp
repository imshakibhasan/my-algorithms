/**
 * @file maximum_square.cpp
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2023-02-15
 * 
 * @copyright Copyright (c) 2023
 * problem : https://codeforces.com/problemset/problem/1243/A
 */
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    int k;
    cin>>k;
    while (k--) {
        int i, j, n, ans = 0, maxi = 0, count = 0;
        cin>>n;
        int arr[n];
        for (i = 0; i < n; i++) {
            cin>>arr[i];
            maxi = max(maxi, arr[i]);
        }
        for (i = 1; i <= maxi; i++) {
            count = 0;
            for (j = 0; j < n; j++) {
                if (arr[j] >= i) {
                    count++;
                    if (count == i) {
                        ans = max(ans, i);
                        break;
                    }
                }
            }
        }
        cout<<ans<<endl;
    }
}

/*
Input
4
5
4 3 1 4 5
4
4 4 4 4
3
1 1 1
5
5 5 1 1 5
*/

/*Output
3
4
1
3
*/