/**
 * @file move_brackets.cpp
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2023-02-07
 * 
 * @copyright Copyright (c) 2023
 * problem : https://codeforces.com/problemset/problem/1374/C
 */
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while (t--) {
        int i, n, count = 0, a = 0;
        cin>>n;
        char arr[n];
        cin>>arr;
        for (i = 0; i < n; i++) {
            if (arr[i] == '(') {
                a++;
            }
            else {
                a--;
                if (a < 0) {
                    count++;
                    a = 0;
                }
            }
        }
        cout<<count<<endl;
    }
}

/*Input
4
2
)(
4
()()
8
())()()(
10
)))((((())
*/

/*Output
1
0
1
3
*/