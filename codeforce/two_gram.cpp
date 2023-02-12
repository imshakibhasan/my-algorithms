/**
 * @file two_gram.cpp
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2023-02-13
 * 
 * @copyright Copyright (c) 2023
 * problem : https://codeforces.com/problemset/problem/977/B
 */
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    int i, j, n, count = 0, p = 0, flag = 0;
    cin>>n;
    char arr[n], ans[2];
    cin>>arr;
    for (i = 0; i < n; i++) {
        count = 0;
        for (j = i + 1; j < n; j++) {
            if (arr[i] == arr[j] && arr[i+1] == arr[j+1]) {
                count++;
                flag++;
            }
        }
        if (count > p) {
            p = count;
            ans[0] = arr[i];
            ans[1] = arr[i+1];
        }
    }
    if (flag == 0) {
        ans[0] = arr[0];
        ans[1] = arr[1];
    }
    cout<<ans[0]<<ans[1]<<endl;
}

/*
Input
7
ABACABA
5
ZZZAA

*/

/*
Output
AB
ZZ
*/