/**
 * @file arya_and_bran.cpp
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2023-03-13
 * 
 * @copyright Copyright (c) 2023
 * problem : https://codeforces.com/problemset/problem/839/A
 */
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    int i, n, k, position = 0, sum = 0, flag = 0;
    cin>>n>>k;
    int arr[n];
    for (i = 0; i < n; i++) {
        cin>>arr[i];
    }
    for (i = 0; i < n; i++) {
        if (arr[i] > 8) {
            sum = sum + 8;
            arr[i+1] +=arr[i]-8; 
        }
        else {
            sum = sum + arr[i];
        }
        if (sum >= k) {
            flag++;
            position = i + 1;
            break;
        }
    }
    if (flag > 0) {
        cout<<position<<endl;
    }
    else {
        cout<<"-1"<<endl;
    }
}

/*
Input
2 3
1 2

3 17
10 10 10

1 9
10

*/

/*
Output

2
3
-1

*/