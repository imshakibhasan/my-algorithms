/**
 * @file ban_ban.cpp
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2022-11-04
 * 
 * @copyright Copyright (c) 2022
 * problem : https://codeforces.com/contest/1747/problem/B
 */
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while (t--) {
        long long int i, n;
        cin>>n;
        cout<<(n+1)/2<<endl;
        for (i = 0; i < (n+1)/2; i++) {
            cout<<(i*3)+1<<" "<<(n*3)-((i*3)+1)+1<<endl;
        }
    }
}

/*
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while (t--) {
        int i, n, p = 2, r = 6, q = 0;
        cin>>n;
        if (n > 1) {
            if (n%2 == 0) {
                cout<<n/2<<endl;
                for (i = 1; i <= n/2; i++) {
                    cout<<p<<" ";
                    p = r + 2;
                    cout<<r<<" ";
                    r = r + 6;
                    cout<<endl;
                }
 
            }
            else {
                cout<<(n+1)/2<<endl;
                for (i = 1; i <= n/2; i++) {
                    cout<<p<<" ";
                    p = r + 2;
                    cout<<r<<" ";
                    r = r + 6;
                    cout<<endl;
                }
                cout<<r-7<<" "<<r-3<<endl;
            }
        }
        else {
            cout<<1<<endl<<"2 3"<<endl;
        }
    }
}
*/