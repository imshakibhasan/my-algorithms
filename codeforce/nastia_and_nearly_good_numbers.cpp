/**
 * @file nastia_and_nearly_good_numbers.cpp
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2023-06-18
 * 
 * @copyright Copyright (c) 2023
 * Problem : https://codeforces.com/problemset/problem/1521/A
 */
#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--) {
        long long a, b;
        cin>>a>>b;
        if(b == 1) {
            cout<<"NO"<<endl;
        }
        else {
            cout<<"YES"<<endl<<a<<' '<<a*b<<' '<<a*(b+1)<<endl;
        }
    }
}

/*Input
3
5 3
13 2
7 11
*/

/*Output
YES
10 50 60
YES
169 39 208
YES
28 154 182
*/