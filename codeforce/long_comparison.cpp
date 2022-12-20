/**
 * @file long_comparison.cpp
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2022-12-20
 * 
 * @copyright Copyright (c) 2022
 * problem : https://codeforces.com/contest/1613/problem/A
 */
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while (t--) {
        int i, j, x1, p1, x2, p2, one = 0, two = 0, p, q, r, s, t, flag = 0;
        cin>>x1>>p1>>x2>>p2;
        p = x1;
        q = x2;
        while (x1 > 0) {
            x1 = x1 / 10;
            one++;
        }
        s = one;
        one = one + p1;
        while (x2 > 0) {
            x2 = x2 / 10;
            two++;
        }
        t = two;
        two = two + p2;
        if (one > two) {
            cout<<">"<<endl;
        }
        else if (two > one) {
            cout<<"<"<<endl;
        }
        else {
            if (s > t) {
                cout<<">"<<endl;
            }
            else if (t > s) {
                cout<<"<"<<endl;
            }
            else {
                char a[s], b[t];
                i = 0;
                while (p > 0) {
                    r = p % 10;
                    a[s-1-i] = 48 + r;
                    p = p / 10;
                }
                i = 0;
                while (q > 0) {
                    r = p % 10;
                    a[t-1-i] = 48 + r;
                    q = q / 10;
                }
                for (i = 0; i < one; i++) {
                    if (a[i] > b[i]) {
                        cout<<">"<<endl;
                        flag++;
                        break;
                    }
                    else if (b[i] > a[i]) {
                        cout<<"<"<<endl;
                        flag++;
                        break;
                    }
                }
                if (flag == 0) {
                    cout<<"="<<endl;
                }
            }
        }
    }
}
/*
Input
5
2 1
19 0
10 2
100 1
1999 0
2 3
1 0
1 0
99 0
1 2
*/

/*
Output
>
=
<
=
<
*/