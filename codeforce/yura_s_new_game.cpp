/**
 * @file yura_s_new_game.cpp
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2023-04-15
 * 
 * @copyright Copyright (c) 2023
 * Problem : https://codeforces.com/problemset/problem/1820/A
 */
#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while (t--) {
        int i, count = 0;
        string s1;
        cin>>s1;
        if (s1[0] == '_') {
            count = 1;
        }
        if (s1.size() == 1 && s1[0] == '^') {
            count = 1;
        }
        for (i = 0; i < s1.size(); i++) {
            if (s1[i] == '_' && s1[i+1] != '^') {
                count++;
            }
        }
        cout<<count<<endl;
    }
}

/*
Input
7
^_ _ _ _ _ _^
_ _ _^_^^^_^_ _ _^
^_
^
^_^^^^^_^_^^
_ _ _^^
_

*/

/*
Output

5
5
1
1
0
3
2

*/