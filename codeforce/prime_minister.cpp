/**
 * @file prime_minister.cpp
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2023-03-01
 * 
 * @copyright Copyright (c) 2023
 * problem : https://codeforces.com/problemset/problem/1178/A
 */

#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    int i, n, count = 0, sum = 0, sum1 = 0;
    cin>>n;
    int arr[n];
    for (i = 0; i < n; i++) {
        cin>>arr[i];
        sum = sum + arr[i];
        if (i > 0 && arr[0] >= (arr[i]*2)) {
            sum1 = sum1 + arr[i];
            count++;
        }
    }
    sum1 = sum1 + arr[0];
    if (sum1 > (sum-sum1)) {
        cout<<count+1<<endl;
        cout<<"1";
        for (i = 1; i < n; i++) {
            if (arr[0] >= arr[i]*2) {
                cout<<" "<<i+1;
            }
        }
        cout<<endl;
    }
    else {
        cout<<"0"<<endl;
    }
}

/*
Input
3
100 50 50

3
80 60 60

2
6 5

4
51 25 99 25

*/

/*
Output
2
1 2

0

1
1

3
1 2 4

*/