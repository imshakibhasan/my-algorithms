/**
 * @file the_third_three_number_problem.cpp
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2023-05-30
 * 
 * @copyright Copyright (c) 2023
 * Problem : https://codeforces.com/problemset/problem/1699/A
 */
#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while (t--) {
        long long int n;
        cin>>n;
        if (n % 2 == 0) {
            cout<<n/2<<" 0 0"<<endl;
        }
        else {
            cout<<"-1"<<endl;
        }
    }
}
/*Input
5
4
1
12
2046
194723326
*/

/*Output
3 3 1
-1
2 4 6
69 420 666
12345678 87654321 100000000
*/