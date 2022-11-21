/**
 * @file advantage.cpp
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2022-11-21
 * 
 * @copyright Copyright (c) 2022
 * problem : https://codeforces.com/contest/1760/problem/C
 */
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while (t--) {
        long long int n, i, maxi = 0, max_p = 0, second_max = 0;
        cin>>n;
        long long int arr[n];
        for (i = 0; i < n; i++) {
            cin>>arr[i];
            if (arr[i] > maxi) {
                maxi = arr[i];
                max_p = i;
            }
        }
        arr[max_p] = 0;
        for (i = 0; i < n; i++) {
            if (arr[i] > second_max) {
                second_max = arr[i];
            }
        }
        for (i = 0; i < n; i++) {
            if (arr[i] == 0) {
                cout<<maxi - second_max<<" ";
            }
            else {
                cout<<arr[i] - maxi<<" ";
            }
        }
        cout<<endl;
    }
}