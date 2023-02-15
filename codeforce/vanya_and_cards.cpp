/**
 * @file vanya_and_cards.cpp
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2023-02-15
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    int i,j,k;
    int n,x,sum=0;

    cin>>n>>x;
    for(i=0;i<n;i++) {
        cin>>k;
        sum+=k;
    }

    sum=abs(sum);

    if(sum==0) {
        cout<<"0";
    }

    else if(sum<=x) {
        cout<<"1";
    }
    else {
        if(sum%x==0) {
            cout<<sum/x;
        }
        else {
            cout<<(sum/x+1);
        }
    }
}