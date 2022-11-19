/**
 * @file restore_the_permutation_by_merger.cpp
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2022-11-19
 * 
 * @copyright Copyright (c) 2022
 * problem : https://codeforces.com/problemset/problem/1385/B
 */
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while (t--) {
        int i, n;
        cin>>n;
        int arr[2*n];
        for (i = 0; i < (2*n); i++) {
            cin>>arr[i];
        }
        for (i = 0; i < (2*n) - 1; i++) {
            for (int j = i + 1; j < (2*n); j++) {
                if (arr[i] == arr[j]) {
                    arr[j] = 0;
                    break;
                }
            }
        }
        for (i = 0; i < (2*n); i++) {
            if (arr[i] != 0) {
                cout<<arr[i]<<" ";
            }
        }
        cout<<endl;
    }
}