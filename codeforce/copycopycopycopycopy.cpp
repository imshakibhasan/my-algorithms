/**
 * @file copycopycopycopycopy.cpp
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2022-10-18
 * 
 * @copyright Copyright (c) 2022
 * problem : https://codeforces.com/problemset/problem/1325/B
 */
/*
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    long long int t, i;
    cin>>t;
    for (i = 0; i < t; i++) {
        long long int n, j, count = 0;
        cin>>n;
        long long int arr[n];
        for (j = 0; j < n; j++) {
            cin>>arr[j];
        }
        for (j = 0; j < n - 1; j++) {
            for (int k = j + 1;  k < n; k++) {
                if (arr[j] == arr[k]) {
                    count++;
                    break;
                }
            }
        }
        cout<<n-count<<endl;
    }
}
*/
#include<bits/stdc++.h>
using namespace std;
int main() {
    int t, i;
    cin>>t;
    for (i = 0; i < t; i++) {
        int a,b;
        cin>>a;
        set<int>arr;
        for (int j = 0; j < a; j++) {
            int b;
            cin>>b;
            arr.insert(b);
        }
        cout<<arr.size()<<endl;
    }
}