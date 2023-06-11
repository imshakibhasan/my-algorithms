/**
 * @file system_of_equations.cpp
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2023-06-11
 * 
 * @copyright Copyright (c) 2023
 * Problem : https://codeforces.com/problemset/problem/214/A
 */
#include<bits/stdc++.h>
using namespace std;
int main() {
    int i, b, n, m, count = 0;
    cin>>n>>m;
    for(i = 0; i*i <= n; i++) {
        b = n - i * i;
        if(m == b*b+i) {
            count++;
        }
    }
    cout<<count<<endl;
}

/*Input
9 3

14 28

4 20

*/

/*Output
1

1

0
*/