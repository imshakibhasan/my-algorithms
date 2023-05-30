/**
 * @file subsequnce_permutation.cpp
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2023-05-30
 * 
 * @copyright Copyright (cpp) 2023
 * Problem : https://codeforces.com/problemset/problem/1552/A
 */
#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while (t--) {
        int i, n, count = 0;
        cin>>n;
        char s1[n], s2[n];
        cin>>s1;
        for (i = 0; i < n; i++) {
            s2[i] = s1[i];
        }
        sort(s1, s1+n);
        for (i = 0; i < n; i++) {
            if (s1[i] != s2[i]) {
                count++;
            }
        }
        cout<<count<<endl;
    }
}

/*Input
4
3
lol
10
codeforces
5
aaaaa
4
dcba
*/

/*Output
2
6
0
4
*/