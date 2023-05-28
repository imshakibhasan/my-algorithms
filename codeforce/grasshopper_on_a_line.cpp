/**
 * @file grasshopper_on_a_line.cpp
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2023-05-28
 * 
 * @copyright Copyright (cpp) 2023
 * Problem : https://codeforces.com/problemset/problem/1837/A
 */
#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while (t--) {
        int x, k;
        cin>>x>>k;
        if (x % k == 0) {
            cout<<2<<endl<<(x-1)<<" "<<1<<endl;
        }
        else {
            cout<<1<<endl<<x<<endl;
        }
    }
}

/*Input
3
10 2
10 3
3 4

*/

/*
Output
2
7 3
1
10
1
3

*/