/**
 * @file choose_two_number.cpp
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2023-01-15
 * 
 * @copyright Copyright (cpp) 2023
 * problem : https://codeforces.com/problemset/problem/1206/A
 */
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    int i, n, m, x = 0, max1 = 0, max2 = 0;
    cin>>n;
    for (i = 0; i < n; i++) {
        cin>>x;
        if (max1 < x) {
            max1 = x;
        }
    }
    cin>>m;
    for (i = 0; i < m; i++) {
        cin>>x;
        if (max2 < x) {
            max2 = x;
        }
    }
    cout<<max1<<" "<<max2<<endl;
}

/*
Input
1
20
2
10 20


3
3 2 2
5
1 5 7 7 9


4
1 3 5 7
4
7 5 3 1
*/

/*
Output
20 20

3 1 

1 1
*/