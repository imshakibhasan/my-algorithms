/**
 * @file helpful_maths.c
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2022-09-15
 * 
 * @copyright Copyright (c) 2022
 * problem : https://codeforces.com/problemset/problem/339/A
 */
#include<stdio.h>
#include<string.h>
int main() {
	int i, j, length, temp;
	char str[101];
	scanf("%s", str);
	length = strlen(str);
	for (i = 0; i < length; i = i+2) {
		for (j = 0; j < length-1-i; j = j + 2) {
			if (str[j] > str[j+2]) {
				temp = str[j];
				str[j] = str[j+2];
				str[j+2] = temp;
			}
		}
	}
	printf("%s", str);
	return 0;
}
/*
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int arr[1001];
	string s;
	cin>>s;
	int count=0;
	for(int i=0;i<s.size();i++) {
	    if(s[i]=='+') {
	        continue;
	    }
        else {
	        arr[count++]=s[i]-'0';
	    }
	}
	sort(arr,arr+count);
	for(int i=0;i<count;i++){
	    cout<<arr[i];
	    if(i==count-1) {
	        break;
	    }
	    cout<<"+";
	}
	return 0;
}
*/