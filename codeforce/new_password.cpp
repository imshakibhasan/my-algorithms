/**
 * @file new_password.cpp
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2023-05-04
 * 
 * @copyright Copyright (c) 2023
 * Problem : https://codeforces.com/problemset/problem/770/A
 */
#include<bits/stdc++.h>
using namespace std;
int main() {
    int n, k;
    char ch = 'a';
    cin>>n>>k;
    int i = 0;
    while (n--) {
        //ch += (i%k);
        //cout<<'a' + (i%k);
        putchar('a'+(i%k));
        i++;
    }
    cout<<endl;
}

/*
Input
4 3

6 6

5 2
*/

/*
Output

java

python

phphp
*/