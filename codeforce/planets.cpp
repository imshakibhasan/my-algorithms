/**
 * @file planets.cpp
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2023-01-26
 * 
 * @copyright Copyright (c) 2023
 * problem : https://codeforces.com/problemset/problem/1730/A
 */
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while (t--) {
        int i, n, c, count = 1, ans = 0;
        cin>>n>>c;
        int arr[n];
        for (i = 0; i < n; i++) {
            cin>>arr[i];
        }
        sort(arr, arr+n);
        for (i = 0; i < n; i++) {
            if (arr[i] == 0) {
                continue;
            }
            count = 1;
            for (int j = i+1; j < n; j++) {
                if (arr[i] == arr[j]) {
                    arr[j] = 0;
                    count++;
                }
                else {
                    break;
                }
            }
            ans = ans + min(count, c);
        }
        cout<<ans<<endl;
    }
}

/*
Input
4
10 1
2 1 4 5 2 4 5 5 1 2
5 2
3 2 1 2 2
2 2
1 1
2 2
1 2


1
1 100
1
*/

/*
Output
4
4
2
2

1
*/