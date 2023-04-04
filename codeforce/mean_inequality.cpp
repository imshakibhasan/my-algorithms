/**
 * @file mean_inequality.cpp
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2023-04-04
 * 
 * @copyright Copyright (c) 2023
 * Problem : https://codeforces.com/problemset/problem/1526/A
 */
#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while (t--) {
        int i, j, flag, n;
        cin>>n;
        long long int arr[(2*n)];
        for (i = 0; i < (2*n); i++) {
            cin>>arr[i];
        }
        sort(arr, arr+(2*n));
        i = 0;
        j = (2*n) - 1;
        flag = 0;
        while (i <= j) {
            if (flag % 2 == 0) {
                cout<<arr[j]<<" ";
                j--;
            }
            else {
                cout<<arr[i]<<" ";
                i++;
            }
            flag++;
        }
        cout<<endl;
    }
}

/*
Input
3
3
1 2 3 4 5 6
2
123 456 789 10
1
6 9
*/

/*
Output
3 1 4 2 5 6
123 10 456 789
9 6
*/