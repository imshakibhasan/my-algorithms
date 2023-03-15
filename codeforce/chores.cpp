/**
 * @file chores.cpp
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2023-03-15
 * 
 * @copyright Copyright (c) 2023
 * problem : https://codeforces.com/problemset/problem/169/A
 */
#include<bits/stdc++.h>
using namespace std;
int main() {
    int i, n, a, b, ans = 0;
    cin>>n>>a>>b;
    int arr[n];
    for (i = 0; i < n; i++) {
        cin>>arr[i];
    }
    sort(arr, arr+n);
    ans = abs(arr[b] - arr[b-1]);
    cout<<ans<<endl;
}

/*
Input
5 2 3
6 2 3 100 1

7 3 4
1 1 9 1 1 1 1

*/

/*
Output
3

0
*/