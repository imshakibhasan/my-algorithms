/**
 * @file stone_game.cpp
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2022-11-16
 * 
 * @copyright Copyright (c) 2022
 * problem : https://codeforces.com/problemset/problem/1538/A
 */
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while (t--) {
        int i, n, ans = 0, maxi = 0, mini = 100, max_p = 0, min_p = 0;
        cin>>n;
        int arr[n];
        for (i = 0; i < n; i++) {
            cin>>arr[i];
            if (arr[i] > maxi) {
                maxi = arr[i];
                max_p = i + 1;
            }
            if (arr[i] < mini) {
                mini = arr[i];
                min_p = i + 1;
            }
        }
        int p = 0, q = 0, r = 0;
        p = min((min_p - 0), ((n+1) - min_p));
        q = min((max_p - 0), ((n+1) - max_p));
        r = abs(max_p - min_p);
        cout<<"max position = "<<max_p<<"\nmin position = "<<min_p<<endl;
        cout<<"p = "<<p<<"\nq = "<<q<<"\nr = "<<r<<endl;
        ans = min((p+q), min((p+r), (q+r)));
        cout<<ans<<endl;
    }
}