/**
 * @file year_of_university_entrance.cpp
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2023-03-23
 * 
 * @copyright Copyright (c) 2023
 * problem : https://codeforces.com/problemset/problem/769/A
 */
#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin>>arr[i];
    }
    sort(arr, arr+n);
    cout<<arr[n/2]<<endl;
}

/*
Input
3
2014 2016 2015

1
2050

*/

/*
Output
2015

2050

*/