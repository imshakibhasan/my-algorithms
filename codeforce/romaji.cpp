/**
 * @file romaji.cpp
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2023-03-11
 * 
 * @copyright Copyright (c) 2023
 * problem : https://codeforces.com/problemset/problem/1008/A
 */
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    int i, n, flag = 0;
    char arr[101];
    cin>>arr;
    n = strlen(arr);
    if (n == 1) {
        if (arr[0] == 'n' || arr[0] == 'a' || arr[0] == 'e' && arr[0] == 'i' || arr[0] == 'o' || arr[i] == 'u') {
            cout<<"YES"<<endl;
        }
        else {
            cout<<"NO"<<endl;
        }
    }
    else {
        for (i = 0; i < n - 1; i++) {
            if (arr[i] != 'a' && arr[i] != 'e' && arr[i] != 'i' && arr[i] != 'o' && arr[i] != 'u' ) {
                if (arr[i] == 'n') {
                    continue;
                }
                else if (arr[i+1] != 'a' && arr[i+1] != 'e' && arr[i+1] != 'i' && arr[i+1] != 'o' && arr[i+1] != 'u') {
                    flag++;
                    break;
                }
            }
        }
        //cout<<"\nFlag = "<<flag<<endl;
        if (arr[n-1] == 'a' || arr[n-1] == 'e' || arr[n-1] == 'i' || arr[n-1] == 'o' || arr[n-1] == 'u' || arr[n-1] == 'n') {
        }
        else {
            flag++;
        }
        //cout<<"\nFlag = "<<flag<<endl;
        if (flag > 0) {
            cout<<"NO"<<endl;
        }
        else {
            cout<<"YES"<<endl;
        }
    }
}

/*
Input
sumimasen

ninja

codeforces

*/

/*
Output

YES

YES

NO
*/