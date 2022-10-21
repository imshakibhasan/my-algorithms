/**
 * @file cowardly_rocks.cpp
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2022-10-20
 * 
 * @copyright Copyright (cpp) 2022
 * problem : https://codeforces.com/contest/1749/problem/A
 */
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    int t, i;
    cin>>t;
    for (i = 0; i < t; i++) {
        int n, m, j, k;
        cin>>n>>m;
        int arr[n][n];
        for (j = 0; j < n; j++ ) {
            for (k = 0; k < n; k++) {
                arr[j][k] = 0;
            }
        }
        for (j = 0; j < m; j++) {
            int x, y;
            cin>>x>>y;
            arr[x-1][y-1] = 1;
        }
        for (j = 0; j < n; j++) {
            for (k = 0; k < n; k++) {
                
            }
        }
    }
}
