/**
 * @file parity_alternated_deletions.cpp
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2022-11-03
 * 
 * @copyright Copyright (c) 2022
 * problem : https://codeforces.com/problemset/problem/1144/B
 */
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    long long int n, i, sum = 0, odd = 0, even = 0, p = 0, q = 0;
    cin>>n;
    long long int arr[n];
    for (i = 0; i < n; i++) {
        cin>>arr[i];
        sum = sum + arr[i];
        if (arr[i]%2 == 0) {
            even++;
        }
        else {
            odd++;
        }
    }
    sort(arr, arr+n);
    if (abs(even - odd) <= 1) {
        cout<<"0"<<endl;
    }
    else if (even == 0 || odd == 0) {
        sum = sum - arr[n-1];
        cout<<sum<<endl;
    }
    else {
        if (even > odd) {
            for (i = n-1; i >= 0; i--) {
                if (p < odd+1 && arr[i]%2 == 0) {
                    sum = sum - arr[i];
                    p++;
                }
                else if (q < odd && arr[i]%2 != 0) {
                    sum = sum - arr[i];
                    q++;
                }
            }
        }
        else {
            for (i = n-1; i >= 0; i--) {
                if (p < even && arr[i]%2 == 0) {
                    sum = sum - arr[i];
                    p++;
                }
                else if (q < even+1 && arr[i]%2 != 0) {
                    sum = sum - arr[i];
                    q++;
                }
            }            
        }
        cout<<sum<<endl;
    }
}

/*
for (i = n-1; i >= 0; i--) {
            if (p < even && q < odd && arr[i]%2 == 0) {
                arr[i] = 0;
                p++;
            }
            else if (q < odd && p < even && arr[i]%2 != 0) {
                arr[i] = 0;
                q++;    
            }
            sum = sum + arr[i];
        }
*/