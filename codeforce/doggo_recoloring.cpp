/**
 * @file doggo_recoloring.cpp
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2023-03-13
 * 
 * @copyright Copyright (c) 2023
 * problem : https://codeforces.com/problemset/problem/1025/A
 */
#include <bits/stdc++.h>
using namespace std;
int main() {
	int n;
	cin>>n;
	string a;
	cin>>a;
	set<char> st;
	for(int i = 0; i < n; i++) {
		st.insert(a[i]);
	}
	if (st.size() < n or n ==1) {
		cout<<"Yes"<<endl;
	}
	else {
		cout<<"No"<<endl;
    }
} 





/*
package letmesleep.lab3_20;
import java.util.Scanner;
public class Lab3_20 {
    public static void main(String[] args) {
 
        System.out.println(" Enter 'a' for heart pattern and 'b' for house pattern");
        Scanner input = new Scanner( System.in);
        char chr= input.next().charAt(0);
 
        switch(chr){
 
            case'a':{
            ///
                System.out.println("Enter a number :");
                /// int n=input.nextInt();
                int n=7;
                for(int i=0;i<=n/2-1;i++){
                    for(int j=n/2+1;j>=n/2+i;j--){
                        System.out.print(" ");
                    }
                    for(int j=1;j<=2*i;j++){
                        System.out.print("*");
                    }
                    for(int j=n/2+1;j>=2*i;j--){
                        System.out.print(" ");
                    }
                    for(int j=1;j<=2*i;j++){
                        System.out.print("*");
                    }
                    System.out.println("");
                }
                for(int i=0;i<=2*(n/2+1);i++){
                    for(int j=0;j<=2*(n/2+1);j++){
                        if(j<i || j>n-i+1){
                            System.out.print(" ");
                        }   
                        else
                            System.out.print("*");
                        } 
                        System.out.println(""); 
                    }
                    break;
                }
                case 'b':{
                ///
                    int n=8;// Change this value as needed;;
                    for(int i=0;i<n/2+1;i++){
 
                        for(int j=0;j<n/2-i;j++){
                            System.out.print(" ");
                        }
                        for(int j=0;j<2*(i+1)-1;j++){
                            System.out.print("*");
                        }
                        System.out.println("");
                    }
                    for(int i=0;i<n/2-1;i++){
                        for(int j=0;j<n/2 -1;j++){
                            System.out.print("*");
                        } 
                        for(int j=0;j<n/2-1 ;j++){
                            System.out.print(" ");
                        } 
                        for(int j=0;j<n/2 -1;j++){
                            System.out.print("*");
                        }
 
                        System.out.println("");
                    }
                    break;
 
                }
            }
 
 
        }
    }
}
*/
/*
#include<bits/stdc++.h>
using namespace std;
int main() {
    int i, j, n, p;
    cin>>n;
    p = n;
    if (n % 3 != 0) {
        int r = n / 3;
        p = (r+1) * 3;
    }
    for (i = 1; i <= p/3; i++) {
        for (j = 1; j <= p/3; j++) {
            cout<<"*";
        }
        for (j = 1; j <= p/3; j++) {
            cout<<" ";
        }
        for (j = 1; j <= p/3; j++) {
            cout<<"*";
        }
        cout<<endl;
    }
}
*/
/*
#include<bits/stdc++.h>
using namespace std;
int main() {
    int i, n;
    double x, sum = 0;
    cin>>x>>n;
    for (i = 1; i <= n; i += 2) {
        sum = sum + (pow(x, i))/fact(i);
    }
    cout<<"sum = "<<sum<<endl;
}
double fact(int i) {
    if (i == 1) {
        return 1;
    }
    else {
        return fact(i)*fact(i-1);
    }
}
*/
/*
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    int i, j, n, two = 0, one = 0, count = 0;
    cin>>n;
    string arr;
    cin>>arr;
    if (n == 1) {
        cout<<"YES"<<endl;
    }
    else {
        for (i = 0; i < n; i++) {
            count = 1;
            if (arr[i] == '0') {
                continue;
            }
            for (j = i + 1; j < n; j++) {
                if (arr[i] == arr[j]) {
                    arr[j] = '0';
                    count++;
                }
            }
            if (count > 1) {
                two++;
            }
            else {
                one++;
            }
        }
        if (two >= one) {
            cout<<"YES"<<endl;
        }
        else {
            cout<<"NO"<<endl;
        }
    }
}
*/
/*
Input
6
aabddc

3
abc

3
jjj

*/

/*
Output

YES

NO

YES

*/