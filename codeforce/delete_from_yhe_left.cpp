/**
 * @file delete_from_yhe_left.cpp
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2022-11-06
 * 
 * @copyright Copyright (c) 2022
 * problem : https://codeforces.com/problemset/problem/1005/B
 */
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    int i, r, length1, length2, count = 0;
    char s1[200001], s2[200001];
    cin>>s1;
    cin>>s2;
    length1 = strlen(s1);
    length2 = strlen(s2);
    if (length1 > length2) {
        r = length1 - length2;
        for (i = length2 - 1; i >= 0; i--) {
            if (s1[r+i] == s2[i]) {
                count++;
            }
            else {
                break;
            }
        }
    }
    else {
        r = length2 - length1;
        for (i = length1 - 1; i >= 0; i--) {
            if (s1[i] == s2[r+i]) {
                count++;
            }
            else {
                break;
            }
        }
    }
    count = (length1 - count) + (length2 - count);
    cout<<(count)<<endl;
}

//cout<<"length 1 = "<<length1<<endl<<"Length 2 = "<<length2<<endl<<"count = "<<count<<endl;