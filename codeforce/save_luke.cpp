/**
 * @file save_luke.cpp
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2023-03-10
 * 
 * @copyright Copyright (c) 2023
 * problem : https://codeforces.com/problemset/problem/624/A
 */
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    double d, l, v1, v2, ans;
    cin>>d>>l>>v1>>v2;
    ans = (l - d) / (v1+v2);
    printf("%.10f", ans);
}

/*
Input
2 6 2 2

1 9 1 2

*/

/*
Output
1.00000000000000000000

2.66666666666666650000

*/