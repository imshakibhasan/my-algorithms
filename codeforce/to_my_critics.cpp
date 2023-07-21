/**
 * @file to_my_critics.cpp
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2023-07-21
 * 
 * @copyright Copyright (cpp) 2023
 * Problem : https://codeforces.com/problemset/problem/1850/A
 */
#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while (t--) {
        int a, b, c;
        cin>>a>>b>>c;
        if ((a+b) >= 10 || (a+c) >= 10 || (b+c) >= 10) {
            cout<<"YES"<<endl;
        }
        else {
            cout<<"NO"<<endl;
        }
    }
}

/*Input
5
8 1 2
4 4 5
9 9 9
0 0 0
8 5 3
*/

/*Output
YES
NO
YES
NO
YES
*/