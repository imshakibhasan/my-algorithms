/**
 * @file keanu_reeves.cpp
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2023-02-23
 * 
 * @copyright Copyright (c) 2023
 * problem : https://codeforces.com/problemset/problem/1189/A
 */
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    int i, n, zero = 0, one = 0;
    cin>>n;
    string arr;
    cin>>arr;
    for (i = 0; i < n; i++) {
        if (arr[i] == '0') {
            zero++;
        }
        else {
            one++;
        }
    }
    if (zero != one) {
        cout<<1<<endl;
        cout<<arr<<endl;
    }
    else {
        cout<<2<<endl;
        cout<<arr[0]<<" ";
        for (i = 1; i < n; i++) {
            cout<<arr[i];
        }
        cout<<endl;
    }
}

/*
Input
1
1

2
10

6
100011

*/

/*
Output
1
1

2
1 0

2
100 011

*/