/**
 * @file integer_diversity.cpp
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2022-12-27
 * 
 * @copyright Copyright (c) 2022
 * problem : https://codeforces.com/problemset/problem/1616/A
 */
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while (t--) {
        int i, n, count = 0, flag = 0, ans = 0;
        cin>>n;
        int arr[n];
        for (i = 0; i < n; i++) {
            cin>>arr[i];
            if (arr[i] == 0) {
                flag++;
            }
        }
        for (i = 0; i < n ; i++) {
            if (arr[i] == 0) {
                continue;
            }
            count = 1;
            for (int j = i + 1; j < n; j++) {
                if (arr[i] + arr[j] == 0 || arr[i] + arr[j] == (2*arr[i])) {
                    arr[j] = 0;
                    count++;
                }
            }
            if (count > 2) {
                ans = ans + 2;
            }
            else {
                ans = ans + count;
            }
        }
        if (flag > 0) {
            ans++;
        }
        cout<<ans<<endl;
    }
}

/*
Input
3
4
1 1 2 2
3
1 2 3
2
0 0
*/
/*
Output
4
3
1
*/
