/**
 * @file div_7.cpp
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2022-11-24
 * 
 * @copyright Copyright (c) 2022
 * problem : 
 */
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while (t--) {
        int i, n, r;
        cin>>n;
        if (n%7 == 0) {
            cout<<n<<endl;
        }
        else {
            r = 10*(n/10);
            for (i = r; r < r+10; i++) {
                if (i%7 == 0) {
                    cout<<i<<endl;
                    break;
                }
            }
        }
    }
}