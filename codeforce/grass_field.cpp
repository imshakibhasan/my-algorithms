/**
 * @file grass_field.cpp
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2022-12-25
 * 
 * @copyright Copyright (c) 2022
 * problem : https://codeforces.com/problemset/problem/1701/A
 */
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while (t--) {
        int x, count = 0;
        for (int i = 1; i <= 4; i++) {
            cin>>x;
            if (x == 1) {
                count++;
            }
        }
        if (count == 0) {
            cout<<"0"<<endl;
        }
        else if (count <= 3) {
            cout<<"1"<<endl;
        }
        else {
            cout<<"2"<<endl;
        }
    }
}
/*
Input
3
0 0
0 0
1 0
0 1
1 1
1 1
*/

/*
Output
0
1
2
*/