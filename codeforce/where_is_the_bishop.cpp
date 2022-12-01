/**
 * @file where_is_the_bishop.cpp
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2022-12-01
 * 
 * @copyright Copyright (c) 2022
 * problem : https://codeforces.com/problemset/problem/1692/C
 */
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while (t--) {
        int i, j;
        char arr[8][8];
        string blank;
        getline(cin, blank);
        getline(cin, blank);
        for (i = 0; i < 8; i++) {
            for (j = 0; j < 8; j++) {
                cin>>arr[i][j];
            }
        }
        for (i = 1; i < 7; i++) {
            for (j = 1; j < 7; j++) {
                if (arr[i][j] == '#') {
                    if ((arr[i-1][j-1] == '#' && arr[i-1][j+1] == '#') && (arr[i+1][j-1] == '#' && arr[i+1][j+1] == '#')) {
                        cout<<i+1<<" "<<j+1<<endl;
                        break;
                    }
                }
            }
        }
    }
}

/*
.....#..
#...#...
.#.#....
..#.....
.#.#....
#...#...
.....#..
......#.
*/