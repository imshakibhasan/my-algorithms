/**
 * @file add_plus_minus_sign.cpp
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2023-02-11
 * 
 * @copyright Copyright (c) 2023
 * probem : https://codeforces.com/contest/1774/problem/A
 */
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--)
    {
    string ans="";
    int sum=0;
    int n;
    cin>>n;
    string s;
    cin>>s;
    if(s[0]=='1')
        sum+=1;
    for(int i=1; i<n; i++)
    {
        if(s[i]=='1')
        {
            if(sum==0)
            {
                ans+='+';
                sum+=1;
            }
            else
            {
                ans+='-';
                sum+=-1;
            }
        }
        else
        {
            ans+='+';
        }
    }
    cout<<ans<<endl;
    }
}

/*
Input
3
2
11
5
01101
5
10001
*/

/*
Output
-
+-++
+++-
*/