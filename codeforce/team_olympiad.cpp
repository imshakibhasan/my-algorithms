/**
 * @file team_olympiad.c
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2022-10-03
 * 
 * @copyright Copyright (c) 2022
 * problem : https://codeforces.com/problemset/problem/490/A
 */
#include <iostream>
using namespace std;
int n, m, ans, arr[4][5001], value[4];
int main() {
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> m;
        arr[m][value[m]++] = i;
    }
    ans = min(value[1], min(value[2], value[3]));
    cout << ans << endl;
    for (int i = 0; i < ans; i++) {
        cout << arr[1][i] << " " << arr[2][i] << " " << arr[3][i] << endl;
    }
}