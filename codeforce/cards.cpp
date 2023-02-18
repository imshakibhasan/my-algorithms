/**
 * @file cards.cpp
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2023-02-18
 * 
 * @copyright Copyright (c) 2023
 * problem : https://codeforces.com/problemset/problem/1220/A
 */
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    int i, n, count = 0, one = 0;
    cin>>n;
    char arr[n];
    cin>>arr;
    for (i = 0; i < n; i++) {
        if (arr[i] == 'z') {
            count++;
        }
    }
    one = n - (count*4);
    one = one / 3;
    for (i = 0; i < one; i++) {
        cout<<"1 ";
    }
    for (i = 0; i < count; i++) {
        cout<<"0 ";
    }
    cout<<endl;
}

/*
Input
4
ezor

10
nznooeeoer
*/

/*
Output
0

1 1 0
*/