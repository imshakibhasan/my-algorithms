/**
 * @file subtract_or_divide.cpp
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2023-04-01
 * 
 * @copyright Copyright (c) 2023
 * Problem : https://codeforces.com/problemset/problem/1451/A
 */
#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while (t--) {
        long long int n;
        cin>>n;
        if (n == 1) {
            cout<<"0"<<endl;
        }
        else if (n == 2) {
            cout<<"1"<<endl;
        }
        else if (n == 3 || n % 2 == 0) {
            cout<<"2"<<endl;
        }
        else {
            cout<<"3"<<endl;
        }
    }
}

/*
Input
6
1
2
3
4
6
9
*/

/*
Output
0
1
2
2
2
3
*/