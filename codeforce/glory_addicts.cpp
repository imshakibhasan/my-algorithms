/**
 * @file glory_addicts.cpp
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2022-10-18
 * 
 * @copyright Copyright (c) 2022
 * problem : https://codeforces.com/problemset/problem/1738/A
 */
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    int t, i;
    cin>>t;
    for (i = 0; i < t; i++) {
        long long int n, j, count_0 = 0, count_1 = 0;
        cin>>n;
        long long int sum = 0, a[n], b[n], p;
        for (j = 0; j < n; j++) {
            cin>>a[j];
            if (a[j] == 0) {
                count_0++;
            }
            else {
                count_1++;
            }
        } 
        for (j = 0; j < n; j++) {
            cin>>b[j];
        }
        if (count_0 == n || count_1 == n) {
            for (j = 0; j < n; j++) {
                sum = sum + b[j];
            }
            cout<<sum<<endl;
        }
        else if (count_0 == count_1) {
            sort(b, b+n);
            for (j = 0; j < n; j++) {
                if (j == 0) {
                    sum = sum + b[j];
                }
                else {
                    sum = sum + (2*b[j]);
                }
            }
            cout<<sum<<endl;
        }
        else if (count_0 > count_1) {
            sort(b, b+n);
            p = count_0 - count_1;
            int q = 0;
            for (j = 0; j < n; j++) {
                if (a[j] == 1) {
                    sum = sum + 2*b[j];
                }
                else {
                    if (q < p) {
                        sum = sum + b[j];
                        q++;
                    }
                    else {
                        sum = sum + 2*b[j];
                    }
                }
            }
            cout<<sum<<endl;

        }
        else {
            sort(b, b+n);
            p = count_1 - count_0;
            int q = 0;
            for (j = 0; j < n; j++) {
                if (a[j] == 0) {
                    sum = sum + 2*b[j];
                }
                else {
                    if (q < p) {
                        sum = sum + b[j];
                        q++;
                    }
                    else {
                        sum = sum + (2*b[j]);
                    }
                }
            }
            cout<<sum<<endl;
        }
    }
}