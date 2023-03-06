/**
 * @file fraction.cpp
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2023-03-06
 * 
 * @copyright Copyright (c) 2023
 * problem : https://codeforces.com/problemset/problem/854/A
 */
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    int n, a, b, p;
    cin>>n;
    if (n == 3) {
        cout<<"1 2"<<endl;
    }
    else {
        a = (n / 2) - 1;
        b = (n / 2) + 1;
        if ((n % 2) == 1) {
            a++;
        }
        p = __gcd(a, b);
        if (p != 1) {
            a--;
            b++;
        }
        cout<<a<<" "<<b<<endl;
    }
}

/*
Input
3

4

12
*/

/*Output
1 2 

1 3 
 
5 7
*/