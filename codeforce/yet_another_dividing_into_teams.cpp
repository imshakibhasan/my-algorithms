/**
 * @file yet_another_dividing_into_teams.cpp
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2023-01-29
 * 
 * @copyright Copyright (c) 2023
 * problem : https://codeforces.com/problemset/problem/1249/A
 */
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    int q;
    cin>>q;
    while (q--) {
        int i, n, count = 0;
        cin>>n;
        int arr[n];
        for (i = 0; i < n; i++) {
            cin>>arr[i];
        }
        sort(arr, arr+n);
        for (i = 0; i < n-1; i++) {
            if (arr[i+1] - arr[i] == 1) {
                count++;
                break;
            }
        }
        if (count == 1) {
            cout<<"2"<<endl;
        }
        else {
            cout<<"1"<<endl;
        }
    }
}

/*
Input
4
4
2 10 1 20
2
3 6
5
2 3 4 99 100
1
42
*/

/*
Output
2
1
2
1
*/