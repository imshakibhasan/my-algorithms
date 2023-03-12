/**
 * @file two_arrays.cpp
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2023-03-12
 * 
 * @copyright Copyright (c) 2023
 * problem : https://codeforces.com/problemset/problem/1584/C
 */
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while (t--) {
        int i, n, flag = 0;
        cin>>n;
        int arr[n], res[n];
        for (i = 0; i < n; i++) {
            cin>>arr[i];
        }
        for (i = 0; i < n; i++) {
            cin>>res[i];
        }
        sort(arr, arr+n);
        sort(res, res+n);
        for (i = 0; i < n; i++) {
            if (res[i] > arr[i]) {
                arr[i]++;
            }
        }
        for (i = 0; i < n; i++) {
            if (arr[i] != res[i]) {
                flag++;
                break;
            }
        }
        if (flag == 0) {
            cout<<"YES"<<endl;
        }
        else {
            cout<<"NO"<<endl;
        }
    }
}

/*
INput
3
3
-1 1 0
0 0 2
1
0
2
5
1 2 3 4 5
1 2 3 4 5

*/

/*
Output
YES
NO
YES

*/