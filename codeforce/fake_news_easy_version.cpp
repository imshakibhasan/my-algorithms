/**
 * @file fake_news_easy_version.cpp
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2023-03-04
 * 
 * @copyright Copyright (c) 2023
 * problem : https://codeforces.com/problemset/problem/802/G
 */
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    int i, n, flag = 0, p = 0;
    char arr[1001], str[6] = "heidi";
    cin>>arr;
    n = strlen(arr);
    if (n <= 5) {
        cout<<"NO"<<endl;
    }
    else {
        for (i = 0; i < 5; i++) {
            for (int j = p; j < n; j++) {
                if (str[i] == arr[j]) {
                    flag++;
                    p = j+1;
                    break;
                }
            }
        }
        if (flag == 5) {
            cout<<"YES"<<endl;
        }
        else {
            cout<<"NO"<<endl;
        }
    }
}

/*
Input
abcheaibcdi

hiedi
*/

/*
Output
YES
NO
*/