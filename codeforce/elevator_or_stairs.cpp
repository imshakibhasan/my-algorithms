/**
 * @file elevator_or_stairs.cpp
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2023-03-25
 * 
 * @copyright Copyright (c) 2023
 * problem : https://codeforces.com/problemset/problem/1054/A
 */
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    int x, y, z, t1, t2, t3, elevator = 0, stairs = 0;
    cin>>x>>y>>z>>t1>>t2>>t3;
    stairs = abs(x - y) * t1;
    elevator = (abs(z - x) * t2) + (abs(x - y) * t2) + (3 * t3);
    if (elevator <= stairs) {
        cout<<"YES"<<endl;
    }
    else {
        cout<<"NO"<<endl;
    }
}

/*
5 1 4 4 2 1

1 6 6 2 1 1

4 1 7 4 1 2
*/

/*
Output
YES

NO

YES
*/