/**
 * @file chewbaсca_and_number.cpp
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2023-02-12
 * 
 * @copyright Copyright (c) 2023
 * problem : https://codeforces.com/problemset/problem/514/A
 */
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    int i, n;
    char arr[20];
    cin>>arr;
    n = strlen(arr);
    for (i = 0; i < n; i++) {
        if (i == 0 && arr[i] == '9') {
            cout<<arr[i];
            continue;
        }
        if (arr[i] > '4') {
            cout<< '9' - arr[i];
        }
        else {
            cout<<arr[i];
        }
    }
    cout<<endl;
}

/*Input
27
4545
*/

/*Output
22
4444*/