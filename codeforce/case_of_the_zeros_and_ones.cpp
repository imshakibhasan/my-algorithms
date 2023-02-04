/**
 * @file case_of_the_zeros_and_ones.cpp
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2023-01-22
 * 
 * @copyright Copyright (c) 2023
 * problem : https://codeforces.com/problemset/problem/556/A
 */
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    int n, i, one = 0, zero = 0;
    cin>>n;
    char str[n];
    cin>>str;
    for (i = 0; i < n; i++) {
        if (str[i] == '0') {
            zero++;
        }
        else {
            one++;
        }
    }
    cout<<n - 2*(min(one, zero))<<endl;
}

/*
4
1100

5
01010

8
11101111
*/

/*
0
1
6
*/