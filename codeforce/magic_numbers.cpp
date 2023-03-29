/**
 * @file magic_numbers.cpp
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2023-03-29
 * 
 * @copyright Copyright (c) 2023
 * Problem : https://codeforces.com/problemset/problem/320/A
 */
#include<bits/stdc++.h>
using namespace std;
int main() {
    long long int n, r, max4 = 0, flag = 0, count4 = 0;
    cin>>n;
    while (n > 0) {
        r = n % 10;
        if (r == 4) {
            count4++;
            max4 = max(max4, count4);
        }
        else if (r == 1) {
            count4 = 0;
        }
        else {
            flag++;
            break;
        }
        n = n / 10;
    }
    if (flag > 0 || max4 > 2 || r == 4) {
        cout<<"NO"<<endl;
    }
    else {
        cout<<"YES"<<endl;
    }
}

/*
Input
114114

1111

441231
*/

/*
Output
YES

YES

NO
*/