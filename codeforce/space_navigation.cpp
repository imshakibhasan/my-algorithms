/**
 * @file space_navigation.cpp
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2023-01-20
 * 
 * @copyright Copyright (c) 2023
 * problem : https://codeforces.com/problemset/problem/1481/A
 */
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while (t--) {
        int i, x, y, n, x1 = 0, y1 = 0;
        cin>>x>>y;
        char ch = '0', ch1 = '0', str[100001];
        cin>>str;
        n = strlen(str);
        if (x > 0) {
            ch = 'R';
        }
        else {
            x = -x;
            ch = 'L';
        }
        if (y > 0) {
            ch1 = 'U';
        }
        else {
            y = -y;
            ch1 = 'D';
        }
        //cout<<ch<<"    "<<ch1<<endl;
        
        for (i = 0; i < n; i++) {
            if (str[i] == ch) {
                x1++;
            }
            if (str[i] == ch1) {
                y1++;
            }
        }
        //cout<<x1<<"    "<<y1<<endl;        
        
        if (x1 >= x && y1 >= y) {
            cout<<"YES"<<endl;
        }
        else {
            cout<<"NO"<<endl;
        }
    }
}

/*
Input
6
10 5
RRRRRRRRRRUUUUU
1 1
UDDDRLLL
-3 -5
LDLDLDDDR
1 2
LLLLUU
3 -2
RDULRLLDR
-1 6
RUDURUUUUR
*/

/*
Output
YES
YES
YES
NO
YES
NO
*/