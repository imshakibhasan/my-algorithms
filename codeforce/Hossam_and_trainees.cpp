/**
 * @file Hossam_and_trainees.cpp
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2022-12-20
 * 
 * @copyright Copyright (c) 2022
 * problem : https://codeforces.com/problemset/problem/1771/C
 */
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while (t--) {
        long long int i, n, even = 0, max = 0, count = 0, flag = 0;
        cin>>n;
        long long int arr[n];
        for (i = 0; i < n; i++) {
            cin>>arr[i];
            if (arr[i]%2 == 0) {
                even++;
            }
        }
        sort(arr, arr+n);
        if (even >= 2) {
            cout<<"YES"<<endl;
        }
        else {
            for (i = 3; i <= arr[n-2]; i+=2) {
                count = 0;
                for (int j = 0; j < n; j++) {
                    if (arr[j] % i == 0) {
                        count++;
                    }
                    if (count == 2) {
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
}