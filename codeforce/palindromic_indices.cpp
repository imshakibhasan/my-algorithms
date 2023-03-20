/**
 * @file palindromic_indices.cpp
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2023-03-20
 * 
 * @copyright Copyright (c) 2023
 * problem : https://codeforces.com/problemset/problem/1682/A
 */
#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while (t--) {
        int i, n, count = 1;
        cin>>n;
        string str;
        cin>>str;
        char ch = str[str.size()/2];
        for (i = (str.size()/2)+1; str[i] == ch; i++) {
            count++;
        }
        for (i = (str.size()/2)-1; str[i] == ch; i--) {
            count++;
        }
        cout<<count<<endl;
    }
}

/*
Input
3
3
aba
8
acaaaaca
2
dd

*/

/*
Output
1
4
2
*/