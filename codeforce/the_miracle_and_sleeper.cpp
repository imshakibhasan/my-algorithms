/**
 * @file the_miracle_and_sleeper.cpp
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2022-12-24
 * 
 * @copyright Copyright (c) 2022
 * problem : https://codeforces.com/problemset/problem/1562/A
 */
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while (t--) {
        long long int l, r, n;
        cin>>l>>r;
        if (((r/2)+1) >= l) {
            cout<<(r-((r/2)+1))<<endl;
        }
        else {
            cout<<(r-l)<<endl;
        }
    }
}
/*
Input
4
1 1
999999999 1000000000
8 26
1 999999999
*/

/*
Output
0
1
12
499999999
*/