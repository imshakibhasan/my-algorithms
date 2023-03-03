/**
 * @file word_correction.cpp
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2023-03-03
 * 
 * @copyright Copyright (c) 2023
 * problem : https://codeforces.com/problemset/problem/938/A
 */
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    int i, n;
    cin>>n;
    char arr[n];
    cin>>arr;
    cout<<arr[0];
    for (i = 1; i < n ; i++) {
        if ((arr[i] == 'a' || arr[i] == 'e' || arr[i] == 'i' || arr[i] == 'o' || arr[i] == 'u' || arr[i] == 'y') && (arr[i-1] == 'a' || arr[i-1] == 'e' || arr[i-1] == 'i' || arr[i-1] == 'o' || arr[i-1] == 'u' || arr[i-1] == 'y')) {
            continue;        
        }
        else {
            cout<<arr[i];
        }
    }
    cout<<endl;
}
/*
Input
5
weird

4
word

5
aaeaa

*/

/*
Output

werd

word

a

*/