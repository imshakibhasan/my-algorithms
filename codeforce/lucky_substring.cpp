/**
 * @file lucky_substring.cpp
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2023-02-13
 * 
 * @copyright Copyright (c) 2023
 * problem : https://codeforces.com/problemset/problem/122/B
 */
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    int i, n, four = 0, seven = 0, others = 0;
    char arr[51];
    cin>>arr;
    n = strlen(arr);
    for (i = 0; i < n; i++) {
        if (arr[i] == '4') {
            four++;
        }
        else if (arr[i] == '7') {
            seven++;
        }
        else {
            others++;
        }
    }
    if (others == n) {
        cout<<"-1"<<endl;
    }
    else if (four >= seven) {
        cout<<"4"<<endl;
    }
    else {
        cout<<"7"<<endl;
    }
}

/*Input
047

16

472747
*/

/*Output
4
-1
7
*/