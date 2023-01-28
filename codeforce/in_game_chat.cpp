/**
 * @file in_game_chat.cpp
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2023-01-28
 * 
 * @copyright Copyright (c) 2023
 * problem : https://codeforces.com/problemset/problem/1411/A
 */
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while (t--) {
        int i, n, count = 0, rc = 0;
        cin>>n;
        char arr[n];
        cin>>arr;
        for (i = n - 1; i >= 0; i--) {
            if (arr[i] == ')') {
                count++;
            }
            else {
                break;
            }
        }
        rc = n - count;
        if (count > rc) {
            cout<<"Yes"<<endl;
        }
        else {
            cout<<"No"<<endl;
        }
    }
}

/*
Input
5
2
))
12
gl))hf))))))
9
gege)))))
14
)aa))b))))))))
1
)
*/

/*
Output
Yes
No
Yes
Yes
Yes
*/