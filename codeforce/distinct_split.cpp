/**
 * @file distinct_split.cpp
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2023-02-04
 * 
 * @copyright Copyright (c) 2023
 * problem : https://codeforces.com/contest/1791/problem/D
 */
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while (t--) {
        int i, j, n, count = 0, ans = 0;
        cin>>n;
        char arr[n];
        cin>>arr;
        for (i = 0; i < n; i++) {
            if (arr[i] == '0') {
                continue;
            }
            count = 0;
            for (j = i + 1; j < n; j++) {
                if (arr[i] == arr[j]) {
                    count++;
                    arr[j] = '0';
                }
            }
            if (count > 1) {
                ans = ans + 2;
            }
            else {
                ans++;
            } 
        }
        cout<<ans<<endl;
    }
}

/*
Input
5
2
aa
7
abcabcd
5
aaaaa
10
paiumoment
4
aazz
*/

/*
Output
2
7
2
10
3
*/