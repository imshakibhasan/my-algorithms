/**
 * @file matching.cpp
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2023-04-30
 * 
 * @copyright Copyright (cpp) 2023
 * Problem : https://codeforces.com/problemset/problem/1821/A
 */
#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while (t--) {
        int i, count = 1;
        string s;
        cin>>s;
        if (s[0] == '0') {
            count = 0;
        }
        else if (s[0] == '?') {
            count *= 9;
        }
        for (i = 1; i < s.size(); i++) {
            if (s[i] == '?') {
                count *= 10;
            }
        }
        cout<<count<<endl;
    }
}

/*
Input
8
??
?
0
9
03
1??7
?5?
9??99
*/

/*
Output
90
9
0
1
0
100
90
100
*/