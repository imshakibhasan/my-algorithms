/**
 * @file unlucky_tickets.cpp
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2023-02-25
 * 
 * @copyright Copyright (c) 2023
 * problem : https://codeforces.com/problemset/problem/160/B
 */
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    int i, j, count1 = 0, count2 = 0,  n;
    cin>>n;
    char a[n], b[n];
    for (i = 0; i < n; i++) {
        cin>>a[i];
    }
    for (i = 0; i < n; i++) {
        cin>>b[i];
    }
    sort(a, a+n);
    sort(b, b+n);
    for (i = 0; i < n; i++) {
        if (a[i] > b[i]) {
            count1++;
        }
        else if (a[i] < b[i]) {
            count2++;
        }
    }
    if (count1 == n || count2 == n) {
        cout<<"YES"<<endl;
    }
    else {
        cout<<"NO"<<endl;
    }
}

/*
Input
2
2421

2
0135

2
3754

*/

/*
Output
YES

YES

NO
*/