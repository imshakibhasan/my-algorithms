/**
 * @file diverse_team.cpp
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2023-01-26
 * 
 * @copyright Copyright (c) 2023
 * problem : https://codeforces.com/problemset/problem/988/A
 */
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    int i, n, k, count = 1, p = 0, q = 0, r = 0;
    cin>>n>>k;
    int arr[n];
    for (i = 0; i < n; i++) {
        cin>>arr[i];
    }
    sort(arr, arr+n);
    for (i = 0; i < n-1; i++) {
        if (arr[i] != arr[i+1]) {
            count++;
            p = (p * 10) + (i+1);
            if (count == k) {
                break;
            }
        }
    }
    if (count >= k) {
        cout<<"YES"<<endl;
        while (q < k) {
            cout<<(p%10)<<" ";
            p = p / 10;
            q++;
        }
        cout<<endl;
    }
    else {
        cout<<"NO"<<endl;
    }
}

/*
Input
5 3
15 13 15 15 12

5 4
15 13 15 15 12

4 4
20 10 40 30
*/

/*Output
YES
1 2 5 

NO

YES
1 2 3 4 

*/