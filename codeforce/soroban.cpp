/**
 * @file soroban.cpp
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2023-03-16
 * 
 * @copyright Copyright (c) 2023
 * problem : https://codeforces.com/problemset/problem/363/A
 */
#include<bits/stdc++.h>
using namespace std;
int main() {
    long long int n;
    cin>>n;
    if (n == 0) {
        cout<<"O-|-OOOO"<<endl;
    }
    while (n > 0) {
        int r = n % 10;
        if (r == 0) {
            cout<<"O-|-OOOO"<<endl;
        }
        else if (r == 1) {
            cout<<"O-|O-OOO"<<endl;
        }
        else if (r == 2) {
            cout<<"O-|OO-OO"<<endl;
        }
        else if (r == 3) {
            cout<<"O-|OOO-O"<<endl;
        }
        else if (r == 4) {
            cout<<"O-|OOOO-"<<endl;
        }
        else if (r == 5) {
            cout<<"-O|-OOOO"<<endl;
        }
        else if (r == 6) {
            cout<<"-O|O-OOO"<<endl;
        }
        else if (r == 7) {
            cout<<"-O|OO-OO"<<endl;
        }
        else if (r == 8) {
            cout<<"-O|OOO-O"<<endl;
        }
        else {
            cout<<"-O|OOOO-"<<endl;
        }
        n = n / 10;
    }
}

/*
INput
2

13

720

*/

/*
Output

O-|OO-OO

O-|OOO-O
O-|O-OOO

O-|-OOOO
O-|OO-OO
-O|OO-OO

*/