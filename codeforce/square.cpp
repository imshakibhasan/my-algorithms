/**
 * @file square.cpp
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2022-10-19
 * 
 * @copyright Copyright (c) 2022
 * problem : https://codeforces.com/problemset/problem/1351/B
 */
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    int t, i;
    cin>>t;
    for (i = 0; i < t; i++) {
        int a1, a2, b1, b2, ans = 0, min1 = 0, min2 = 0, max1 = 0, max2 = 0;
        cin>>a1>>b1>>a2>>b2;
        min1 = min(a1, b1);
        max1 = max(a1, b1);
        min2 = min(a2, b2);
        max2 = max(a2, b2);
        //ans = max(a1, max(b1, max(a2, b2)));
        if (max1 == max2) {
            if (max1 == (min1+min2)) {
                cout<<"Yes"<<endl;
            }
            else {
                cout<<"No"<<endl;
            }
        }
        else {
            cout<<"No"<<endl;
        }
    }
}
//cout<<"Min 1 = "<<min1<<endl<<"Min 2 = "<<min2<<endl<<"ans = "<<ans;