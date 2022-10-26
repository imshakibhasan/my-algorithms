/**
 * @file cards_for_friends.cpp
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2022-10-26
 * 
 * @copyright Copyright (c) 2022
 * problem : https://codeforces.com/problemset/problem/1472/A
 */
/*
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while (t--) {
        long long int w, h, n, i = 0, p = 1, flag = 0;
        cin>>w>>h>>n;
        while (1) {
            i++;
            if (w%2 != 0 && h%2 != 0) {
                if (p >= n) {
                    cout<<"YES"<<endl;
                    flag++;
                    break;
                }
                break;
            }
            else if (w %2 == 0 && h % 2 != 0) {
                w = w / 2;
                h = h;
                p = p + i;
                if (p >= n) {
                    cout<<"YES"<<endl;
                    flag++;
                    break;
                }
            }
            else if (h%2 == 0 && w % 2 != 0) {
                w = w;
                h = h / 2;
                p = p + i;
                if (p >= n) {
                    cout<<"YES"<<endl;
                    flag++;
                    break;
                }
            }
            else {
                p = (p + i + (i + 1));
                if (p >= n) {
                    cout<<"YES"<<endl;
                    flag++;
                    break;
                }
                break;
            }
        }
        if (flag == 0) {
            cout<<"NO"<<endl;
        }
    }
}
*/
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while (t--) {
        long long int w = 0 , h = 0, n = 0, count = 1;
        cin>>w>>h>>n;
        if (n == 1) {
            cout<<"YES"<<endl;
            continue;
        }
        while (w % 2 == 0) {
            w = w / 2;
            count = count * 2;
        }
        while ( h % 2 == 0) {
            h = h / 2;
            count = count * 2;
        }
        if (n <= count) {
            cout<<"YES"<<endl;
        }
        else {
            cout<<"NO"<<endl;
        }
    }
}