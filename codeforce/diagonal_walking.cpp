/**
 * @file diagonal_walking.cpp
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2023-02-28
 * 
 * @copyright Copyright (c) 2023
 * problem : https://codeforces.com/problemset/problem/954/A
 */
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    int i, n, count = 0;
    cin>>n;
    char arr[n];
    cin>>arr;
    for (i = 0; i < n; ) {
        if (arr[i] == 'R' && arr[i+1] == 'U') {
            count++;
            i = i + 2;
        }
        else if (arr[i] == 'U' && arr[i+1] == 'R') {
            count++;
            i = i + 2;
        }
        else {
            i++;
        }
    }
    cout<<n-count<<endl;
}

/*
Input
5
RUURU

17
UUURRRRRUUURURUUU

*/

/*
Output
3

13
*/