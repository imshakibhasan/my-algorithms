/**
 * @file two_brackets.cpp
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2023-02-06
 * 
 * @copyright Copyright (c) 2023
 * problem : https://codeforces.com/problemset/problem/1452/C
 */
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while (t--) {
        int i, j, n, a = 0, b = 0, flag = 0;
        char arr[200001];
        cin>>arr;
        n = strlen(arr);
        for (i = 0; i < n; i++) {
            if (arr[i] == '(') {
                a++;
            }
            else if (arr[i] == '[') {
                b++;
            }
            if (arr[i] == ')' && a > 0) {
                a--;
                flag++;
            }
            else if (arr[i] == ']' && b > 0) {
                b--;
                flag++;
            }
        }
        cout<<flag<<endl; 
    }
}
/*Input
5
()
[]()
([)]
)]([
)[(]
*/

/*Output
1
2
2
0
1
*/


/*
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while (t--) {
        int i, j, n, count = 0;
        char ch, arr[200001];
        cin>>arr;
        n = strlen(arr);
        for (i = 0; i < n; i++) {
            if (arr[i] == '0') {
                continue;
            }
            if (arr[i] == '(') {
                ch = '(';
            }
            else if (arr[i] == '[') {
                ch = '[';
            }
            for (j = i + 1; j < n; j++) {
                if ((arr[i] + 1 == arr[j]) || arr[i] + 2 == arr[j]) {
                    arr[i] = '0';
                    arr[j] = '0';
                    count++;
                    break;
                }
            }
        }
        cout<<count<<endl;
    }
}

/*Input
5
()
[]()
([)]
)]([
)[(]
*/

/*Output
1
2
2
0
1
*/