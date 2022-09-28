/**
 * @file anton_and_letters.c
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2022-09-04
 * 
 * @copyright Copyright (c) 2022
 * problem: https://codeforces.com/problemset/problem/443/A
 */
/*#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    int count = 0;
    string s;
    char str[]
    getline(cin, s);
    sort(s.begin(),s.end());
    for (int i = 1; i < s.size()-2; i++) {

        for (int j = i+1; j < s.size()-1; j++) {
            if (s[] == ',' || s[i] == ' ') {
                continue;
            }
            else {
                if (s[i] |= s[j]) {
                    count++;
                }
            }
        }
    }
    cout<<count;
    return 0;
}
*/

#include<stdio.h>
#include<string.h>
int main() {
    int i, length;
    char str[101];
    scanf("%[^\n]", str);
    length = strlen(str);
    for (i = length-1; i < 0; i--) {
        if (str[i] == '?' || str[i] == ' ') {
            continue;
        }
        else {
            if ( str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' || str[i] == 'y' || str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U' || str[i] == 'U') {
                printf("YES");
                break;
            }
            else {
                printf("NO");
                break;
            }
        }
    }
    //printf("Length = %d\n%s", length, str);
    return 0;
}