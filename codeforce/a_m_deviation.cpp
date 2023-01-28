/**
 * @file a_m_deviation.cpp
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2023-01-29
 * 
 * @copyright Copyright (c) 2023
 * problem : https://codeforces.com/problemset/problem/1605/A
 */
#include<istream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while (t--) {
        long long int i, a, b, c, ans = 0;
        cin>>a>>b>>c;
        ans = abs(a + c - (2*b));
        ans = ans % 3;
        if (ans == 2) {
            ans = 1;
        }
        cout<<ans<<endl;
    }
}