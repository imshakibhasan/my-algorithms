/**
 * @file even_odd_increments.cpp
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2022-10-16
 * 
 * @copyright Copyright (c) 2022
 * problem : https://codeforces.com/contest/1744/problem/B
 */
/*
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    int t, i;
    cin>>t;
    for (i = 0; i < t; i++) {
        long long int n, q, j, count_even = 0, count_odd = 0;
        cin>>n>>q;
        long long int arr[n];
        //char even[n], odd[n];
        for (j = 0; j < n; j++) {
            cin>>arr[j];
            if (arr[j] % 2 == 0) {
                count_even++;
            }
            else {
                count_odd++;
            }
        }
        long long int a[count_even], b[count_odd];
        for (j = 0; j < n; j++)
        for (j = 0; j < q; j++) {
            int r, s, k;
            long long int sum = 0;
            cin>>r>>s;
            if (r == 0) {
                for (k = 0; k < n; k++) {
                    if (arr[k] % 2 == 0) {
                        arr[k] = arr[k] + s;
                    }
                    sum = sum + arr[k];
                }
            }
            else {
                for (k = 0; k < n; k++) {
                    if (arr[k] % 2 != 0) {
                        arr[k] = arr[k] + s;
                    }
                    sum = sum + arr[k];
                }
            }
            cout<<sum<<endl;
        }
    }
}
*/
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    int t, i;
    cin>>t;
    for (i = 0; i < t; i++) {
        long long int n, q, j, sum = 0;
        cin>>n>>q;
        long long int count_e = 0, count_o = 0, arr[n];
        for (j = 0; j < n; j++) {
            cin>>arr[j];
            sum = sum + arr[j];
            if (arr[j] % 2 == 0) {
                count_e++;
            }
            else {
                count_o++;
            }
        }
        int r, s;
        for (j = 0; j < q; j++) {
            int r, s;
            cin>>r>>s;
            if (r == 0) {
                sum = sum + (s*count_e);
                if (s%2 != 0) {
                    count_o = count_o + count_e;
                    count_e = 0;
                }
            }
            else {
                sum = sum + (s * count_o);
                if (s%2 != 0) {
                    count_e = count_o + count_e;
                    count_o = 0;
                } 
            }
            cout<<sum<<endl;
        }
    }
}