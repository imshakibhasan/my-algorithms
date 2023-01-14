/**
 * @file remove_duplicates.cpp
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2023-01-14
 * 
 * @copyright Copyright (c) 2023
 * problem : https://codeforces.com/problemset/problem/978/A
 */
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    int i, j, n, count = 0, flag = 0;
    cin>>n;
    int arr[n];
    for (i = 0; i < n; i++) {
        cin>>arr[i];
    }
    for (i = 0; i < n-1; i++) {
        for (j = i+1; j < n; j++) {
            if (arr[i] == arr[j]) {
                count++;
                break;
            }
        }
    }
    cout<<n-count<<endl;
    for (i = 0; i < n-1; i++) {
        flag = 0;
        for (j = i+1; j < n; j++) {
            if (arr[i] == arr[j]) {
                flag++;
            }
        }
        if (flag == 0) {
            cout<<arr[i]<<" ";
        }
    }
    cout<<arr[n-1]<<endl;
}

/*
Input
6
1 5 5 1 6 1

5
2 4 2 4 4

5
6 6 6 6 6

*/

/*
Output
3
5 6 1 

2
2 4 

1
6
*/