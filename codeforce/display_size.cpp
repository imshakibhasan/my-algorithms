/**
 * @file display_size.cpp
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2023-03-17
 * 
 * @copyright Copyright (c) 2023
 * problem : https://codeforces.com/problemset/problem/747/A
 */
#include<bits/stdc++.h>
using namespace std;
int main() {
    int i, n, a, b, r, p = 1000000, p1;
    cin>>n;
    if (n == 1) {
        cout<<"1 1"<<endl;
    }
    else {
        for (i = 1; i <= (n/2); i++) {
            if (n % i == 0) {
                r = n / i;
                p1 = abs(r - i);
                if (p1 < p) {
                    p = p1;
                    a = i;
                    b = r;
                }
            }
        }
        cout<<a<<" "<<b<<endl;
    }
}

/*
Input
8

64

5

999999

*/

/*
Output
2 4

8 8 

1 5 

999 1001

*/