/**
 * @file initial_bet.cpp
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2023-04-01
 * 
 * @copyright Copyright (c) 2023
 * Problem : https://codeforces.com/problemset/problem/478/A
 */
#include<bits/stdc++.h>
using namespace std;
int main() {
    int sum = 0, c1, c2, c3, c4, c5;
    cin>>c1>>c2>>c3>>c4>>c5;
    sum = c1 + c2 + c3 + c4 + c5;
    if (sum > 0 && sum % 5 == 0) {
        cout<<sum/5<<endl;
    }
    else {
        cout<<"-1"<<endl;
    }
}

/*
Input
2 5 4 0 4

4 5 9 2 1
*/

/*
Output
3

-1
*/