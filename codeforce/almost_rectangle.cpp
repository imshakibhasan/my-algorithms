/**
 * @file almost_rectangle.cpp
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2022-12-24
 * 
 * @copyright Copyright (c) 2022
 * problem : https://codeforces.com/problemset/problem/1512/B
 */
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while (t--) {
        int i, j, n, x1 = 0, y1 = 0, x2 = 0, y2 = 0, flag = 0;
        cin>>n;
        char arr[n][n];
        for (i = 0; i < n; i++) {
            for (j = 0; j < n; j++) {
                cin>>arr[i][j];
                if (arr[i][j] == '*') {
                    if (flag > 0) {
                        x2 = i;
                        y2 = j;
                    }
                    else {
                        x1 = i;
                        y1 = j;
                        flag++;
                    }
                }
            }
        }
        if (x1 == x2) {
            if(x1+1 < n) {
                arr[x1+1][y1] = '*';
                arr[x2+1][y2] = '*';
            }
            else {
                arr[x1-1][y1] = '*';
                arr[x2-1][y2] = '*';
            }
        }
        else if (y1 == y2) {
            if (y1+1 < n) {
                arr[x1][y1+1] = '*';
                arr[x2][y2+1] = '*';
            }
            else {
                arr[x1][y1-1] = '*';
                arr[x2][y2-1] = '*';
            }
        }
        else {
            arr[x1][y2] = '*';
            arr[x2][y1] = '*';
        }
        for (i = 0; i < n; i++) {
            for (j = 0; j < n; j++) {
                cout<<arr[i][j];
            }
            cout<<endl;
        }
    }
}
/*
Input
6
4
..*.
....
*...
....
2
*.
.*
2
.*
.*
3
*.*
...
...
5
.....
..*..
.....
.*...
.....
4
....
....
*...
*...

*/

/*
Output
*.*.
....
*.*.
....
**
**
**
**
*.*
*.*
...
.....
.**..
.....
.**..
.....
....
....
**..
**..
*/