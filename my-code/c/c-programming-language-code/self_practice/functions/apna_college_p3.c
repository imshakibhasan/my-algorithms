#include<stdio.h>
int sum(int x, int y);
void table_n(int n );
int main() {
    //int a, b, s;
    //printf("\nEnter Two Numbers to finds its Summation : ");        //scanf("%d%d", &a,&b);
    //s = sum(a,b);
   // printf("Summation is : %d", s);
   int n;
   printf("\nEnter a Number to finds it Table : ");
   scanf("%d", &n);
   table_n(n);  // argument or actual parameter
    return 0;
}

int sum(int x, int y) {
    return (x+y);
}
void table_n( int n) { //parameter or formal parameter
    for(int i=1; i<=10; i++)
    printf(" 5 * %d = %d\n", i, i*n);
}