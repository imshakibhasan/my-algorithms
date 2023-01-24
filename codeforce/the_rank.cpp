/**
 * @file the_rank.cpp
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2023-01-25
 * 
 * @copyright Copyright (c) 2023
 * problem : https://codeforces.com/problemset/problem/1017/A
 */
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()  {
    int i, n, count = 0, smith = 0, sum = 0;;
    cin>>n;
    for (i = 0; i < n; i++) {
        int a, b, c, d;
        cin>>a>>b>>c>>d;
        if (i == 0) {
            smith = a + b + c + d;
            continue;
        }
        sum = a + b + c + d;
        if (sum > smith) {
            count++;
        }
    }
    cout<<count+1<<endl;
}

/*
Input
5
100 98 100 100
100 100 100 100
100 100 99 99
90 99 90 100
100 98 60 99

6
100 80 90 99
60 60 60 60
90 60 100 60
60 100 60 80
100 100 0 100
0 0 0 0

*/

/*
Output
2

1
*/