/**
 * @file multiplication_table.cpp
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2023-01-23
 * 
 * @copyright Copyright (c) 2023
 * problem : https://codeforces.com/problemset/problem/577/A
 */

#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    long long int n, x, ans = 0;
    cin>>n>>x;
    for (int i = 1; i <= n; i++) {
        if (x % i == 0 && x / i <= n) {
            ans++;
        }
    }
    cout<<ans<<endl;
}


/*Input
10 5

6 12

5 13
*/

/*
Output
2

4

0
*/


/*
#include <iostream>
using namespace std;

int main()
{
    int n, x, c(0);
    cin >> n >> x;

    for (int i = 1; i <= n; i++)
        if (x % i == 0 and x / i <= n) c++;

    cout << c << endl;
    return 0;
}
*/