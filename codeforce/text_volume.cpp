/**
 * @file text_volume.cpp
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2023-03-16
 * 
 * @copyright Copyright (c) 2023
 * problem : https://codeforces.com/problemset/problem/837/A
 */
#include<bits/stdc++.h>
using namespace std;
int main() {
    int i, n, count = 0, ans = 0;
    string arr;
    cin>>n;
    getchar();
    cin>>arr;
    for (i = 0; i < n; i++) {
        
        if (isupper(arr[i])) {
            count++;
            cout<<"i = "<<arr[i]<<endl;
        }
        ans = max(ans, count);
        if (arr[i] == ' ') {
            count = 0;
        }
    }
    cout<<ans<<endl;
}

/*
Input
7
NonZERO

24
this is zero answer text

24
Harbour Space University

*/

/*
2

0

1

*/