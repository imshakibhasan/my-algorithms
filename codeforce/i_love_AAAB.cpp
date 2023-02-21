/**
 * @file i_love_AAAB.cpp
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2023-02-22
 * 
 * @copyright Copyright (c) 2023
 * Problem : https://codeforces.com/problemset/problem/1672/B
 */
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while (t--) {
        long long int i, n, count = 0, A = 0, B = 0;
        char arr[200001];
        cin>>arr;
        n = strlen(arr);
        if (n == 1) {
            cout<<"NO"<<endl;
            continue;
        }
        for (i = 0; i < n; i++) {
            if (arr[i] == 'B') {
               B++;
            }
            else {
                A++;
            }
            if (B > A) {
                count++;
                break;
            }
        }
        if (arr[n-1] == 'A') {
            count++;        
        }
        if (count > 0) {
            cout<<"NO"<<endl;
        }
        else {
            cout<<"YES"<<endl;
        }
    }
}

/*
Input
4
AABAB
ABB
AAAAAAAAB
A
*/

/*
Output
YES
NO
YES
NO
*/