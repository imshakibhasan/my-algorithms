/**
 * @file petya&strings.cpp
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2022-09-01
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include<iostream>
#include<string.h>
using namespace std;
int main() {
    string a, b;
    cin>>a>>b;
    int i;
    for (i = 0; i < a.size(); i++) {
        a[i] = towlower(a[i]);
        b[i] = towlower(b[i]);
    }
    if (a == b) {
        cout<<"0"<<endl;
    }
    for ( i = 0; i < a.size(); i++) {
        if ( a[i] < b[i]) {
            cout<<"-1"<<endl;
            break;
        }
        if (a[i] > b[i]) {
            cout<<"1"<<endl;
            break;
        }
    }
    return 0;
}