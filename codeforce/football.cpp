/**
 * @file football.cpp
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2023-01-22
 * 
 * @copyright Copyright (c) 2023
 * problem : https://codeforces.com/problemset/problem/43/A
 */
#include <iostream>
#include <string>

using namespace std;

int main() {
    int n, goal(0);
    cin >> n;

    string team, win;
    while (n--) {
        if (goal != 0) {
            cin >> team;
            if (team == win) {
                goal += 1;
            }
            else {
                goal -= 1;
            }
        }
        else {
            cin >> win;
            goal = 1;
        }
    }
    cout << win << endl;
}

/*
Input
1
ABC


5
A
ABA
ABA
A
A
*/

/*
Output
ABC

A
*/