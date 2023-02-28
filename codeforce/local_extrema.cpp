/**
 * @file local_extrema.cpp
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2023-03-01
 * 
 * @copyright Copyright (c) 2023
 * problem : https://codeforces.com/problemset/problem/888/A
 */
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    int i, n, count = 0;
    cin>>n;
    int arr[n];
    for (i = 0; i < n; i++) {
        cin>>arr[i];
    }
    for (i = 1; i < n - 1; i++) {
        if ((arr[i] > arr[i-1]) && (arr[i] > arr[i+1])) {
            count++;
        }
        else if ((arr[i] < arr[i-1]) && (arr[i] < arr[i+1])) {
            count++;
        }
    }
    cout<<count<<endl;
}

/*
Input
3
1 2 3

4
1 5 2 5

*/

/*
Output

0

2

*/