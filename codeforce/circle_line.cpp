/**
 * @file circle_line.cpp
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2023-02-28
 * 
 * @copyright Copyright (c) 2023
 * problem : https://codeforces.com/problemset/problem/278/A
 */
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    int i, n, k, p, s, t, sum = 0, sum2 = 0, sum1 = 0;
    cin>>n;
    int arr[n];
    for (i = 0; i < n; i++) {
        cin>>arr[i];
        sum1 = sum1 + arr[i];
    }
    cin>>s>>t;
    k = min(s, t);
    p = max(s, t);
    k--;
    //if (s == t) {
    //    cout<<"0"<<endl;
    //}
    for (i = k; i < p-1; i++) {
        sum2 = sum2 + arr[i];
    }
    sum1 = abs(sum1 - sum2);
    sum = min(sum1, sum2);
    cout<<sum<<endl;
}

/*
Input
4
2 3 4 9
1 3


4
5 8 2 100
4 1


3
1 1 1
3 1


3
31 41 59
1 1

*/