/**
 * @file new_palindrome.cpp
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2023-05-24
 * 
 * @copyright Copyright (c) 2023
 * Problem : https://codeforces.com/problemset/problem/1832/A
 */
#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while (t--) {
        int i, j, n, flag = 0;
        char s[51];
        cin>>s;
        n = strlen(s);
        for (i = 0; i <n/2; i++) {
            flag = 0;
            for (j = i+1; j < n/2; j++) {
                if (s[i] != s[j]) {
                    flag++;
                    break;
                }
            }
            if (flag != 0) {
                break;
            }
        }
        if (flag > 0) {
            cout<<"YES"<<endl;
        }
        else {
            cout<<"NO"<<endl;
        }
    }
}

/*
Input
3
codedoc
gg
aabaa
*/

/*
Output
YES
NO
NO
*/