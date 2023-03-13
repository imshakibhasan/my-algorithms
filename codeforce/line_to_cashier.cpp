/**
 * @file line_to_cashier.cpp
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2023-03-13
 * 
 * @copyright Copyright (c) 2023
 * problem : https://codeforces.com/problemset/problem/408/A
 */
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    int i, n, sum = 0, r, ans = 1000000000;
    cin>>n;
    int arr[n];
    for (i = 0; i < n; i++) {
        cin>>arr[i];
    }
    for (i = 0; i < n; i++) {
        for (int j = arr[i]; j > 0; j--) {
            int x;
            cin>>x;
            sum = sum + x;
        }
        r = (sum * 5) + (arr[i]*15);
        ans = min(ans, r);
        sum = 0;
    }
    cout<<ans<<endl;
}

/*
Input
1
1
1

4
1 4 3 2
100
1 2 2 3
1 9 1
7 8

*/

/*
Output
20
100
*/