/**
 * @file avoid_local_maximums.cpp
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2023-01-25
 * 
 * @copyright Copyright (c) 2023
 * problem : https://codeforces.com/problemset/problem/1635/B
 */
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while (t--) {
        long long int i, n, count = 0;
        cin>>n;
        long long int arr[n];
        for (i = 0; i < n; i++) {
            cin>>arr[i];
        }
        for (i = 1; i < n - 1; i++) {
            if (arr[i] > arr[i-1] && arr[i] > arr[i+1]) {
                if ((i + 2 < n) && (arr[i+2] > arr[i])) {
                    arr[i+1] = arr[i+2];
                }
                else {
                    arr[i+1] = arr[i];
                }
                count++;
            }
        }
        cout<<count<<endl;
        for (i = 0; i < n; i++) {
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
}

/*
Input
5
3
2 1 2
4
1 2 3 1
5
1 2 1 2 1
9
1 2 1 3 2 3 1 2 1
9
2 1 3 1 3 1 3 1 3
*/

/*
Output
0
2 1 2
1
1 3 3 1
1
1 2 2 2 1
2
1 2 3 3 2 3 3 2 1
2
2 1 3 3 3 1 1 1 3
*/