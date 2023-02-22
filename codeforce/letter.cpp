/**
 * @file letter.cpp
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2023-02-22
 * 
 * @copyright Copyright (c) 2023
 * problem : https://codeforces.com/problemset/problem/14/A
 */
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    int i, j, n, m, mini_i = 51, maxi_i = -1, mini_j = 51, maxi_j = -1;
    cin>>n>>m;
    char arr[n][m];
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            cin>>arr[i][j];
            if (arr[i][j] == '*') {
                mini_i = min(mini_i, i);
                maxi_i = max(maxi_i, i);
                mini_j = min(mini_j, j);
                maxi_j = max(maxi_j, j);
            }
        }
    }

    for (i = mini_i; i <= maxi_i; i++) {
        for (j = mini_j; j <= maxi_j; j++) {
            cout<<arr[i][j];
        }
        cout<<endl;
    }
    cout<<endl;
}


/////cout<<"start i = "<<mini_i<<"\n Finish i = "<<maxi_i<<"\n start j = "<<mini_j<<"\nFinish = "<<maxi_j;
/*
Input
6 7
.......
..***..
..*....
..***..
..*....
..***..

3 3
***
*.*
***

*/

/*
Output
***
*..
***
*..
***

***
*.*
***

*/