/**
 * @file colorful_stones.cpp
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2023-02-20
 * 
 * @copyright Copyright (c) 2023
 * problem : https://codeforces.com/problemset/problem/265/A
 */
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    int i, n, p, x = 0, count = 1;
    char s[51], t[51];
    cin>>s;
    cin>>t;
    n = strlen(s);
    p = strlen(t);
    for (i = 0; i < n; i++) {
        for (int j = x; j < p; j++) {
            x++;
            if (s[i] == t[j]) {
                count++;
                break;
            }
        }
    }
    cout<<count<<endl;
}

/*
INput
RGB
RRR

RRRBGBRBBB
BBBRR

BRRBGBRGRBGRGRRGGBGBGBRGBRGRGGGRBRRRBRBBBGRRRGGBBB
BBRBGGRGRGBBBRBGRBRBBBBRBRRRBGBBGBBRRBBGGRBRRBRGRB
*/

/*Output
2

3

15
*/