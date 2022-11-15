/**
 * @file points_on_the_line_reborn.cpp
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2022-11-15
 * 
 * @copyright Copyright (c) 2022
 * problem : https://codeforces.com/problemset/problem/940/A
 */

#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    int i, j, n, d, ans = 0, count = 1;
    cin>>n>>d;
    int arr[n];
    for (i = 0; i < n; i++) {
        cin>>arr[i];
    }
    sort(arr, arr+n);
    if (arr[n-1] - arr[0] <= d) {
        cout<<"0"<<endl;
    }
    else {
        for (i = 0; i < n; i++) {
            count = 1;
            for (j = i + 1; j < n; j++) {
                if ((arr[j] - arr[i]) <= d) {
                    count++;
                }
                else {
                    ans = max(ans, count);
                    break;
                }
            }
            ans = max(ans, count);
        }
        cout<< (n-ans)<<endl;
    }
}