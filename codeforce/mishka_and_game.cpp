/**
 * @file mishka_and_game.c
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2022-09-30
 * 
 * @copyright Copyright (c) 2022
 * problem : https://codeforces.com/problemset/problem/703/A 
 **/
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    int n, i, mishka = 0, chris = 0;
    cin>>n;
    for (i = 0; i < n; i++) {
        int x, y;
        cin>>x>>y;
        if (x > y) {
            mishka++;
        }
        else if (y > x) {
            chris++;
        }
    }
    if (mishka > chris) {
        cout<<"Mishka";
    }
    else if ( chris > mishka) {
        cout<<"Chris";
    }
    else {
        cout<<"Friendship is magic!";
    }
}
/*
#include<stdio.h>
int main() {
    int n, i, mishka = 0, chris = 0;
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        int x, y;
        scanf("%d%d", &x, &y);
        if (x > y) {
            mishka++;
        }
        else if (y > x) {
            chris++;
        }
    }
    if (mishka > chris) {
        printf("Mishka");
    }
    else if (chris > mishka) {
        printf("Chris");
    }
    else {
        printf("Friendship is magic!");
    }
    return 0;
}
*/