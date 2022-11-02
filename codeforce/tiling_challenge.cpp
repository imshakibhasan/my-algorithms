/**
 * @file tiling_challenge.cpp
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2022-11-02
 * 
 * @copyright Copyright (c) 2022
 * problem : https://codeforces.com/problemset/problem/1150/B
 */
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    int n, i, j, count = 0, total_ti = 0;
    cin>>n;
    char arr[n][n];
    for (i = 0; i < n; i++) {
        char str[n];
        cin>>str;
        for (j = 0; j < n; j++) {
            arr[i][j] = str[j];
            if (str[j] == '.') {
                count++;
            }
        }
    }
    for (i = 1; i < n -1; i++) {
        for (j = 0; j < n-2; j++) {
            if (arr[i][j] == '.' && arr[i][j+1] == '.' && arr[i][j+2] == '.') {
                if (arr[i-1][j+1] == '.' && arr[i+1][j+1]== '.') {
                    total_ti++;
                    arr[i][j] = 0;
                    arr[i][j+1] = 0;
                    arr[i][j+2] = 0;
                    arr[i-1][j+1] = 0;
                    arr[i+1][j+1] = 0;
                }
            }
        }
    }
    cout<<"Count = "<<count<<endl<<"Total tiles = "<<total_ti<<endl;
    if (count == (5*total_ti)) {
        cout<<"YES"<<endl;
    }
    else {
        cout<<"NO"<<endl;
    }
}

/*
21
##.######.###.#####.#
#...##.#.......#.#...
##..#...#.....#.....#
#....#..###.###.....#
....#....####....#.##
#..#....##.#....#.###
#...#.###...#.##....#
#..#.##.##.##.##.....
..........##......#.#
#.##.#......#.#..##.#
#.##.............#...
..........#.....##..#
#.#..###..###.##....#
#....##....##.#.....#
....#......#...#.#...
#.#.........#..##.#.#
#..........##.......#
....#....#.##..##....
#.#.##.#.......##.#.#
##...##....##.##...##
###.####.########.###
*/