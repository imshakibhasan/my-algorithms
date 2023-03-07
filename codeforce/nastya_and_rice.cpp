/**
 * @file nastya_and_rice.cpp
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2023-03-08
 * 
 * @copyright Copyright (c) 2023
 * problem : https://codeforces.com/problemset/problem/1341/A
 */
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while (t--) {
        int n, a, b, c, d, ans = 0, ans1 = 0, limit = 0, limit1 = 0;
        cin>>n>>a>>b>>c>>d;
        ans = n * (a - b);
        limit = (c + d);
        ans1 = n * (a + b);
        limit1 = c - d;
        //cout<<" ANs = "<<ans<<"\nLimit = "<<limit<<"\nANS1 = "<<ans1<<"\nLIMIT1 = "<<limit1<<endl;
        if (ans <= limit && ans1 >= limit1) {
            cout<<"YES"<<endl;
        }
        else {
            cout<<"NO"<<endl;
        }
    }
}

/*
Input
5
7 20 3 101 18
11 11 10 234 2
8 9 7 250 122
19 41 21 321 10
3 10 8 6 1
*/

/*
Output
Yes
No
Yes
No
Yes

*/