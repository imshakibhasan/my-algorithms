/**
 * @file nezzer_and_colorful_balls.cpp
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2022-12-23
 * 
 * @copyright Copyright (c) 2022
 * problem : https://codeforces.com/problemset/problem/1478/A
 */
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while (t--) {
        int i, n, maxi = 0, count = 0, ans = 0;
        cin>>n;
        int arr[n];
        for (i = 0; i < n; i++) {
            cin>>arr[i];
            if (arr[i] > maxi) {
                maxi = arr[i];
            }
        }
        for (i = 1; i <= maxi; i++) {
            count = 0;
            for (int j = 0; j < n; j++) {
                if (arr[j] == i) {
                    count++;
                }
            }
            ans = max(ans, count);
        }
        cout<<ans<<endl;
    }
}
/*
Input
5
6
1 1 1 2 3 4
5
1 1 2 2 3
4
2 2 2 2
3
1 2 3
1
1
*/

/*
Output
3
2
4
1
1
*/