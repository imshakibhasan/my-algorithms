/**
 * @file number_transformation.cpp
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2023-06-12
 * 
 * @copyright Copyright (c) 2023
 * Problem : https://codeforces.com/problemset/problem/1674/A
 */

#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while (t--) {
        int x, y;
        cin>>x>>y;
        if (y % x != 0) {
            cout<<"0 0"<<endl;
        }
        else {
            cout<<"1 "<<y/x<<endl;
        }
    }
}
/*Input
3
3 75
100 100
42 13
*/

/*Output
2 5
3 1
0 0
*/
