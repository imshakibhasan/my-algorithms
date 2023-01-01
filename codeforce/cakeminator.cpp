/**
 * @file cakeminator.cpp
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2022-12-31
 * 
 * @copyright Copyright (c) 2022
 * problem : https://codeforces.com/problemset/problem/330/A
 */
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    int i, j, r, c, r1 = 0, c1 = 0, row = 0, col = 0, p = 0, ans = 0;
    cin>>r>>c;
    char arr[r][c];
    for(i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            cin>>arr[i][j];
        }
    }
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            if (arr[i][j] == 'S') {
                r1++;
                break;
            }
        }
    }
    for (i = 0; i < c; i++) {
        for (j = 0; j < r; j++) {
            if (arr[j][i] == 'S') {
                c1++;
                break;
            }
        }
    }
    row = (r*c) - (r1*c);
    col = (r*c) - (r*c1);
    p = (r-r1) * (c - c1);
    ans = (row + col) - p;
    cout<<ans<<endl;
}

/*
Input:
3 4
S...
....
..S.
*/

/*
Output : 
8
*/