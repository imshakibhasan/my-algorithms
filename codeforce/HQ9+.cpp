/**
 * @file HQ9+.cpp
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2022-12-15
 * 
 * @copyright Copyright (c) 2022
 * problem : https://codeforces.com/problemset/problem/133/A
 */
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    int i, n, flag = 0;
    char arr[101];
    cin>>arr;
    n = strlen(arr);
    for (i = 0; i < n; i++) {
        if (arr[i] == 'H' || arr[i] == 'Q' || arr[i] == '9') {
            flag++;
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
