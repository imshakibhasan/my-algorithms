/**
 * @file dragons.c
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2022-09-11
 * 
 * @copyright Copyright (c) 2022
 * problem : https://codeforces.com/problemset/problem/230/A
 */
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    int s, n, i, flag = 0;
    cin>>s>>n;
    pair<int, int>arr[n];
    for (i = 0; i < n; i++) {
        cin>>arr[i].first;
        cin>>arr[i].second;
    }
    sort(arr, arr+n);
    for (i = 0; i < n; i++) {
        if (s <= arr[i].first) {
            flag++;
            break;
        }
        else {
            s = s + arr[i].second;
        }
    }
    if (flag == 0) {
        cout<<"YES"<<endl;
    }
    else {
        cout<<"NO"<<endl;
    }
}

/*
Input
2 2
1 99
100 0

10 1
100 100

*/

/*
Output
YES
NO*/