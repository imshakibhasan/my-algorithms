/**
 * @file three_swimmers.cpp
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2022-12-29
 * 
 * @copyright Copyright (c) 2022
 * problem : https://codeforces.com/problemset/problem/1492/A
 */
#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while (t--){
        long long  p , a , b , c;
        cin>>p>>a>>b>>c;
        long long  x,y,z;
        x = a - (p % a);
        y = b - (p % b);
        z = c - (p % c);
        if(p % a == 0 || p % b == 0 || p % c == 0) {
            cout<<"0"<<endl;
        }
        else {
            cout<<min(x, min(y, z))<<endl;
        }
    }
}