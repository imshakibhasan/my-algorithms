/**
 * @file cut_the_triangle.cpp
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2022-12-16
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
        long long int x1, y1, x2, y2, x3, y3, flag = 0;
        string s , blank;
        getline(cin, blank);
        getline(cin, blank);
        cin>>x1>>y1>>x2>>y2>>x3>>y3;
        if ((x1 > x2 && x3 < x2) || (x1 < x2 && x3 > x2) || (x2 > x1 && x3 < x1) || (x2 < x1 && x3 > x1) || (x1 > x3 && x2 < x3) || (x1 < x3 && x2 > x3)) {
            flag++;
        }
        else if ( (y1 > y2 && y3 < y2) || (y1 < y2 && y3 > y2) || (y2 > y1 && y3 < y1) || (y2 < y1 && y3 > y1) || (y1 > y3 && y2 < y3) || (y1 < y3 && y2 > y3)) {
            flag++;
        }
        if (flag > 0) {
            cout<<"YES"<<endl;
        }
        else {
            cout<<"NO"<<endl;
        }
    }
}