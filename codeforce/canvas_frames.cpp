/**
 * @file canvas_frames.cpp
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2023-02-13
 * 
 * @copyright Copyright (c) 2023
 * problem : https://codeforces.com/problemset/problem/127/B
 */
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    int i, j, n, count = 0, ans = 0;
    cin>>n;
    int arr[n];
    for (i = 0; i < n; i++) {
        cin>>arr[i];
    }
    for (i = 0; i < n; i++) {
        if (arr[i] == 0) {
            continue;
        }
        count = 1;
        for (j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                count++;
                arr[j] = 0;
            }
        }
        ans = ans + (count/2);
    }
    cout<<ans/2<<endl;
}

/*
Input
5
2 4 3 2 3

13
2 2 4 4 4 4 6 6 6 7 7 9 9

4
3 3 3 5
*/

/*
Output
1

3

0
*/