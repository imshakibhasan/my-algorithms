/**
 * @file complicated_gcd.cpp
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2023-02-17
 * 
 * @copyright Copyright (c) 2023
 * problem : https://codeforces.com/problemset/problem/664/A
 */
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    string s1 , s2;
    cin>>s1;
    cin>>s2;
    if (s1 == s2) {
        cout<<s1<<endl;
    }
    else {
        cout<<"1"<<endl;
    }
}

/*
Input
1 2

61803398874989484820458683436563811772030917980576 61803398874989484820458683436563811772030917980576
*/

/*
Output
1

61803398874989484820458683436563811772030917980576
*/