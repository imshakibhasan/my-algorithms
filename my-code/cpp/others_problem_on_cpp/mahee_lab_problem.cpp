/**
 * @file mahee_lab_problem.c
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2022-05-31
 * 
 * @copyright Copyright (c) 2022
 * 
 * problem: Printing the all odd elements sequencely from the entered number
 * 
 */

#include<iostream>
using namespace std;
int main() {
    int number, last_element;
    int i, length, arr[100];
    cout<<"\nPlease enter the number: ";
    cin>>number;
    i=0;
    while( number>0 ) {
        last_element = number%10;
        number = number/10;
        if ( last_element%2==1 ) {
            for ( i; i<100; ) {

                arr[i]=last_element;
                break;
            }
            i++;
        }    
    }
    length = i;
    for ( i=length-1; i>=0; i-- ) {
        cout<<arr[i];
    }
    return 0;
}

