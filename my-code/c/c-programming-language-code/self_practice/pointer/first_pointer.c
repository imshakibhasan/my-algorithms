#include<stdio.h>
int main() {
    //int a[3][3], b[3][3], c[3][3];
    //int i, j;
    //for ( i=0; i<3; i++) {
    int age=22;
    int *str=&age;
   
    printf("ptr = %u\n", str);  
    str--;
    printf("ptr = %u\n", str); 
    return 0;

}