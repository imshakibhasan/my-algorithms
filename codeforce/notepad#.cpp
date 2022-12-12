/**
 * @file notepad#.cpp
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2022-12-12
 * 
 * @copyright Copyright (c) 2022
 * problem : https://codeforces.com/contest/1766/problem/B
 */
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while (t--) {
        long long int i, j, n, flag = 0;
        cin>>n;
        char arr[n];
        cin>>arr;
        for (i = 0; i < n; i++) {
            for (j = i+2; j < n; j++) {
                if (arr[i] == arr[j] && arr[i+1] == arr[j+1]) {
                    flag++;
                    break;
                }
            }
            if (flag > 0) {
                break;
            }
        }
        if (flag > 0) {
            cout<<"YES"<<endl;
        }
        else {
            cout<<"NO"<<endl;
        }
    }
}