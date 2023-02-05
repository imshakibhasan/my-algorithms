/**
 * @file copy_paste.cpp
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2023-02-06
 * 
 * @copyright Copyright (c) 2023
 * problem : https://codeforces.com/problemset/problem/1417/A
 */
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while (t--) {
        int i, n, k, mini = 1001, ans = 0;
        cin>>n>>k;
        int arr[n];
        for (i = 0; i < n; i++) {
            cin>>arr[i];
        }
        sort(arr, arr+n);
        for (i = 1; i < n; i++) {
            ans = ans + floor((k-arr[i])/arr[0]);
        }
        cout<<ans<<endl;
    }
}

/*Input
3
2 2
1 1
3 5
1 2 3
3 7
3 2 2
*/

/*Output
1
5
4
*/