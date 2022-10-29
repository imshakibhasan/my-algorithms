/**
 * @file make_a_equal_to_b.cpp
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2022-10-29
 * 
 * @copyright Copyright (cpp) 2022
 * problem : https://codeforces.com/problemset/problem/1736/A
 */
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while (t--) {
        int n, i, count_a = 0, count_b = 0;
        cin>>n;
        int a[n], b[n];
        for (i = 0; i < n; i++) {
            cin>>a[i];
            if (a[i] == 1) {
                count_a++;
            }
        }
        for (i = 0; i < n; i++) {
            cin>>b[i];
            if (b[i] == 1) {
                count_b++;
            }
        }
        int r = 0, flag = 0;
        //int r = abs(count_a - count_b);
        if (count_a == count_b) {
            for (i = 0; i < n; i++) {
                if (a[i] != b[i]) {
                    cout<<"1"<<endl;
                    flag++;
                    break;
                }
            }
            if (flag == 0) {
                cout<<"0"<<endl;
            }
        }
        else if (count_a > count_b) {
            for (i = 0; i < n; i++) {
                if (a[i] != b[i]) {
                    a[i] = b[i];
                    r++;
                    if (r == (count_a - count_b)) {
                        break;
                    }
                }
            }
            for (i = 0; i < n; i++) {
                if (a[i] != b[i]) {
                    cout<<r+1<<endl;
                    flag++;
                    break;
                }
            }
            if (flag == 0) {
                cout<<r<<endl;
            }
        }
        else {
            for (i = 0; i < n; i++) {
                if (b[i] != a[i]) {
                    b[i] = a[i];
                    r++;
                    if (r == (count_b - count_a)) {
                        break;
                    }
                }
            }
            for (i = 0; i < n; i++) {
                if (b[i] != a[i]) {
                    cout<<r+1<<endl;
                    flag++;
                    break;
                }
            }
            if (flag == 0) {
                cout<<r<<endl;
            }
        }
    }
}