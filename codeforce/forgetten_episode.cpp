/**
 * @file forgetten_episode.cpp
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2023-03-09
 * 
 * @copyright Copyright (c) 2023
 * problem : https://codeforces.com/problemset/problem/440/A
 */
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    int i, n;
    cin>>n;
    int arr[n-1];
    for (i = 0; i < n-1; i++) {
        cin>>arr[i];
    }
    sort(arr, arr+n);
    int p = 1;
    for (i = 0; i <= n; i++) {
        if (arr[i] != p) {
            break;
        }
        p++;
    }
    cout<<p<<endl;
}

/*
Input
10
3 8 10 1 7 9 6 5 2
*/

/*
Output
4
*/