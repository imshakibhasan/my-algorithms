/**
 * @file polycarp_and_sum_of_subsequence.cpp
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2023-03-29
 * 
 * @copyright Copyright (c) 2023
 * Problem : https://codeforces.com/problemset/problem/1618/A
 */
#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while (t--) {
        int i, arr[7], sum1 = 0, sum2 = 0, flag = 0;
        for (i = 0; i < 7; i++) {
            cin>>arr[i];
        }
        sum1 = arr[0] + arr[1] + arr[2];
        sum2 = arr[0] + arr[1] + arr[3];
        if (sum1 == arr[6]) {
            cout<<arr[0]<<" "<<arr[1]<<" "<<arr[2]<<endl;
        }
        else if (sum2 == arr[6]) {
            cout<<arr[0]<<" "<<arr[1]<<" "<<arr[3]<<endl;
        }
        else {
            cout<<"IDEA Worng!!!!!!!!"<<endl;
        }
    }
}

/*
Input
5
1 3 4 4 5 7 8
1 2 3 4 5 6 7
300000000 300000000 300000000 600000000 600000000 600000000 900000000
1 1 2 999999998 999999999 999999999 1000000000
1 2 2 3 3 4 5

*/

/*
Output
1 4 3
4 1 2
300000000 300000000 300000000
999999998 1 1
1 2 2

*/