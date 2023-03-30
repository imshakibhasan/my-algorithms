/**
 * @file products_of_three_numbers.cpp
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2023-03-30
 * 
 * @copyright Copyright (c) 2023
 * Problem : https://codeforces.com/problemset/problem/1294/C
 */
#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while (t--) {
        long long int i, n, p, r = 0, count = 0, arr[3];
        cin>>n;
        p = n;
        for (i = 2; i*i <= p; i++) {
            if (n % i == 0) {
                arr[r] = i;
                r++;
                count++;
                n = n / i;
            }
            if (count == 2) {
                arr[r] = n;
                break;
            }
        }
        if (count < 2 || (arr[0] ==arr[2] || arr[1] == arr[2])) {
            cout<<"NO"<<endl;
        }
        else {
            cout<<"YES"<<endl<<arr[0]<<" "<<arr[1]<<" "<<arr[2]<<endl;
        }
    }
}

/*
Input
5
64
32
97
2
12345

*/

/*
Output
YES
2 4 8 
NO
NO
NO
YES
3 5 823 
*/