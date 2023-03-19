/**
 * @file plus_or_minus.cpp
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2023-03-19
 * 
 * @copyright Copyright (c) 2023
 * Problem : https://codeforces.com/contest/1807/problem/A
 */
#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while (t--) {
        int a, b, c;
        cin>>a>>b>>c;
        if ((a+b) == c) {
            cout<<"+"<<endl;
        }
        else {
            cout<<"-"<<endl;
        }
    }
}

/*
Input
11
1 2 3
3 2 1
2 9 -7
3 4 7
1 1 2
1 1 0
3 3 6
9 9 18
9 9 0
1 9 -8
1 9 10

*/

/*
output
+
-
-
+
+
-
+
+
-
-
+
*/