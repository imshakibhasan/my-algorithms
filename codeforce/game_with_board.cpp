/**
 * @file game_with_board.cpp
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2023-06-12
 * 
 * @copyright Copyright (c) 2023
 * Problem : https://codeforces.com/contest/1841/problem/A
 */
#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while (t--) {
        int n;
        cin>>n;
        if (n > 4) {
            cout<<"Alice"<<endl;
        }
        else {
            cout<<"Bob"<<endl;
        }
    }
}

/*Input
2
3
6
*/

/*Output
Bob
Alice
*/