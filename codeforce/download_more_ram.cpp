/**
 * @file download_more_ram.cpp
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2022-11-29
 * 
 * @copyright Copyright (c) 2022
 * problem : https://codeforces.com/problemset/problem/1629/A
 */
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
    ll t, n, k, i, ans;
    cin>>t;
    while (t--) {
        cin>>n>>k;
        ans=k;
        vector<pair<ll, ll>> c;
        ll a[n], b[n];
        for(i=0; i<n; i++) {
            cin>>a[i];
        }
        for(i=0; i<n; i++) {
            cin>>b[i];
        }
        for(i=0; i<n; i++) {
            c.push_back({a[i], b[i]});
        }
        sort(c.begin(), c.end());
        for(i=0; i<n; i++) {
            if(c[i].first<=ans) {
                ans=ans+c[i].second;
            }
            else {
                break;
            }   
        }
        cout<<ans<<"\n";    
    }
}