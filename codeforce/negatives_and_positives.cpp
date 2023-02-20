/**
 * @file negatives_and_positives_reborn.cpp
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2023-02-20
 * 
 * @copyright Copyright (c) 2023
 * problem : https://codeforces.com/problemset/problem/1791/E
 */
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while (t--) {
        long long i, n, x, negatives = 0, sum = 0, mini = 1000000001;
        cin>>n;
        for (i = 0; i < n; i++) {
            cin>>x;
            if (x < 0) {
                negatives++;
            }
            sum = sum + abs(x);
            if (abs(x) < mini) {
                mini = abs(x);
            }
        }
        if (negatives % 2 == 0) {
            cout<<sum<<endl;
        }
        else {
            cout<<(sum-(2 * mini))<<endl;
        }
    }
}


/*
Input
5
3
-1 -1 -1
5
1 5 -5 0 2
3
1 2 3
6
-1 10 9 8 7 6
2
-1 -1
*/

/*
Output
1
13
6
39
2
*/


/*
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while (t--) {
        long long i, n, negatives = 0, sum = 0, mini = 1000000001;
        cin>>n;
        long long int arr[n];
        for (i = 0; i < n; i++) {
            cin>>arr[i];
            if (arr[i] < 0) {
                negatives++;
            }
            sum = sum + abs(arr[i]);
            if (abs(arr[i]) < mini) {
                mini = abs(arr[i]);
            }
        }
        //cout<<"Negatives = "<<negatives<<"\nSum = "<<sum<<"\nMini = "<<mini<<endl;
        if (negatives % 2 == 0) {
            cout<<sum<<endl;
        }
        else {
            cout<<(sum-(2 * mini))<<endl;
        }
    }
}
*/