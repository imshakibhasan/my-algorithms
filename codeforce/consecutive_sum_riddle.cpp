/**
 * @file consecutive_sum_riddle.cpp
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2023-01-20
 * 
 * @copyright Copyright (c) 2023
 * problem : https://codeforces.com/problemset/problem/1594/A
 */
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while (t--) {
        long long int n;
        cin>>n;
        cout<<-(n-1)<<" "<<n<<endl;
    }
}

/*
Input
7
1
2
3
6
100
25
3000000000000
*/

/*
Output
0 1
-1 2 
1 2 
1 3 
18 22
-2 7
999999999999 1000000000001
*/