/**
 * @file love_story.cpp
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2023-05-06
 * 
 * @copyright Copyright (c) 2023
 * Problem : https://codeforces.com/problemset/problem/1829/A
 */
#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while (t--) {
        int count = 0;
        string s, r = "codeforces";
        cin>>s;
        for (int i = 0; i < 10; i++) {
            if (s[i] != r[i]) {
                count++;
            }
        }
        cout<<count<<endl;
    }
}

/*
Input
5
coolforsez
cadafurcie
codeforces
paiuforces
forcescode
*/

/*
Output
4
5
0
4
9
*/