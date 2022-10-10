/**
 * @file free_ice_cream.c
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2022-09-29
 * 
 * @copyright Copyright (c) 2022
 * problem : https://codeforces.com/problemset/problem/686/A
 */
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    int n, x;
    cin>>n>>x;
    long long int count = 0;
    for (int i = 0; i < n; i++) {
        char op;
        int num;
        cin>>op>>num;
        if (op == '+') {
            x += num;
        }
        else {
            if (num <= x) {
                x -= num;
            }
            else {
                count++;
            }
        }
    }
    cout<<x<<" "<<count<<endl;
}

/*
#include<stdio.h>
int main() {
    int n, x, i, count = 0;
    scanf("%d%d", &n, &x);
    for (i = 0; i < n; i++) {
        int d;
        char ch, cp;
        scanf("%c", &ch);
        scanf("%c", &cp);
        scanf("%d", &d);
        printf("%c\t", ch);
        if (ch == '+') {
            x = x + d;
        }
        else {
            if ( d <= x) {
                x = x - d;
            }
            else {
                count++;
            }
        }
        printf("x = %d\t count = %d\n", x, count);
        //count++;
    }
    printf("%d %d", x, count);
    return 0;
}
*/