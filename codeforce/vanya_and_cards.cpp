/**
 * @file vanya_and_cards.cpp
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2023-02-15
 * 
 * @copyright Copyright (c) 2023
 * problem : https://codeforces.com/problemset/problem/401/A
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
        cout<<"0"<<endl;
    }

    else if(sum<=x) {
        cout<<"1"<<endl;
    }
    else {
        if(sum%x==0) {
            cout<<sum/x<<endl;
        }
        else {
            cout<<(sum/x+1)<<endl;
        }
    }
}

/*Input
3 2
-1 1 2

2 3
-2 -2
*/

/*Output
1

2
*/