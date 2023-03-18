/**
 * @file declined_finalists.cpp
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2023-03-18
 * 
 * @copyright Copyright (c) 2023
 * Problem : https://codeforces.com/problemset/problem/859/A
 */
#include<bits/stdc++.h>
using namespace std;
int main() {
    int i, k, maxi = 0;
    cin>>k;
    for (i = 0; i < k; i++) {
        int x;
        cin>>x;
        maxi = max(maxi, x);
    }
    if (maxi > 25) {
        cout<<(maxi - 25)<<endl;
    } 
    else {
        cout<<"0"<<endl;
    }
}

/*
Input
25
2 3 4 5 6 7 8 9 10 11 12 14 15 16 17 18 19 20 21 22 23 24 25 26 28

5
16 23 8 15 4

3
14 15 92

*/

/*
Output
3

0

67

*/