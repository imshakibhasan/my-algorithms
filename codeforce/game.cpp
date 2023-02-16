/**
 * @file game.cpp
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2023-02-16
 * 
 * @copyright Copyright (c) 2023
 * Problem : https://codeforces.com/problemset/problem/1649/A
 */
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while (t--) {
        int i, n, count = 0, a = 0;
        cin>>n;
        int arr[n];
        for (i = 0; i < n; i++) {
            cin>>arr[i];
            if (arr[i] == 1) {
                a++;
            }
        }
        for (i = 1; i  < n - 1; i++) {
            if (arr[i] == 1 ) {
                count++;
            }
            else {
                break;
            }
        }
        for (i = n -2; i > 0; i--) {
            if (arr[i] == 1) {
                count++;
            }
            else {
                break;
            }
        }
        //cout<<"Count = "<<count<<endl;
        if (a == n) {
            cout<<"0"<<endl;
        }
        else {
            cout<<n - 1 - count<<endl;
        }
    }
}

/*Input
3
2
1 1
5
1 0 1 0 1
4
1 0 1 1
*/

/*
Output
0
4
2
*/