/**
 * @file towers.cpp
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2023-04-08
 * 
 * @copyright Copyright (c) 2023
 * Problem : https://codeforces.com/problemset/problem/37/A
 */
#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int n, l, h[1001] = {0};
    cin >> n;
    while (n--) {
        cin >> l;
        h[l] += 1;
    }

    int height = *max_element(h, h + 1001);
    int number = 1001 - count(h, h + 1001, 0);

    cout << height << " " << number << endl;

    return 0;
}

/*
Input
3
1 2 3

4
6 5 6 7

*/

/*
Output

1 3

2 3

*/