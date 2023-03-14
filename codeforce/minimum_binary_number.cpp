/**
 * @file minimum_binary_number.cpp
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2023-03-14
 * 
 * @copyright Copyright (c) 2023
 * problem : https://codeforces.com/problemset/problem/976/A
 */
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    int i, n, count1 = 0, count0 = 0;
    cin>>n;
    string arr;
    cin>>arr;
    for (i = 0; i < n; i++) {
        if (arr[i] == '0') {
            count0++;
        }
        else {
            count1++;
        }
    }
    if (count1 > 0) {
        cout<<"1";
    }
    for (i = 1; i <= count0; i++) {
        cout<<"0";
    }
    cout<<endl;
}

/*
Input
4
1001

1
1

*/

/*
Output

100

1

*/