/**
 * @file opponents.c
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2022-09-30
 * 
 * @copyright Copyright (c) 2022
 * problem : https://codeforces.com/problemset/problem/688/A
 */
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    int n, d, i, res[d], count = 0, ans = 0;
    cin>>n>>d;
    for (i = 0; i < d; i++) {
        char str[n];
        cin>>str;
        for (int j = 0; j < n; j++) {
            if (str[j] == '0') {
                res[i] = 1;
                break;
            }
        }
    }
    for (i = 0; i < d; i++) {
        if (res[i] == 1) {
            count++;
        }
        else {
            count = 0;
        }
        ans = max(ans, count);
    }
    cout<<ans;
}
/*
#include<stdio.h>
int main() {
    int n, d, i, r = 0, count, res[d], ans;
    scanf("%d%d", &n, &d);
    for (i = 1; i <= d; i++) {
        char str[n];
        scanf("%s", str);
        for (int j = 0; j < n; j++) {
            if (str[j] == '0') {
                res[i] = 1;
                break;
            }
        }
    }
    for (i = 0; i < d; i++) {
        if (res[i] == 1) {
            count++;
        }
        else {
            count = 0;
        }
        if (count > ans) {
            ans = count;
        }
    }
    printf("%d", ans);
    return 0;
}
*/