/**
 * @file ania_and_minimizing.cpp
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2023-01-09
 * 
 * @copyright Copyright (c) 2023
 * problem : https://codeforces.com/problemset/problem/1230/B
 */
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    int i, n, k, p = 0;
    cin>>n>>k;
    char arr[n];
    cin>>arr;
    if (k == 0) {
        cout<<arr<<endl;
    }
    else if (n == 1 && k >= 1) {
        cout<<"0"<<endl;
    }
    else {
        for (i = 0; i < n; i++) {
            if ( i == 0 && arr[i] != '1') {
                arr[i] = '1';
                p++;
            }
            else if (i > 0 && arr[i] != '0') {
                arr[i] = '0';
                p++;
            }
            if (p == k) {
                break;
            }
        }
        cout<<arr<<endl;
    }   
}
/*
Input
5 3
51528

3 2
102

1 1
1
*/

/*
Output
10028
100
1
*/