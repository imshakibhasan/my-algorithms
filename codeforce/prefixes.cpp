/**
 * @file prefixes.cpp
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2023-06-09
 * 
 * @copyright Copyright (c) 2023
 * Problem : https://codeforces.com/problemset/problem/1216/A
 */
#include<bits/stdc++.h>
using namespace std;
int main(){
    int i, n, k = 0;
    string s;
    cin>>n>>s;
    for(i = 0; i < n-1; i+=2) {
        if(s[i]-s[i+1] == 0)s[i] = 'a'+'b'-s[i],k++;         
    }
    cout<<k<<endl<<s<<endl;
}

/*Input
4
bbbb

6
ababab

2
aa
*/

/*Output
2
abba

0
ababab

1
ba
*/