/**
 * @file the_good_array.cpp
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2023-06-03
 * 
 * @copyright Copyright (c) 2023
 * Problem : https://codeforces.com/problemset/problem/1839/A
 */
 #include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while (t--) {
        int n, k;
        cin>>n>>k;
        cout<<(n - 2)/ k + 2<<endl;
    }
}

/*Input
7
3 2
5 2
9 3
7 1
10 4
9 5
8 8
*/

/*Output
2
3
4
7
4
3
2
*/
