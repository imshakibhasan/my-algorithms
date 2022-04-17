#include <stdio.h>
int main(){
    int n;
    printf("Enter the start number: ");
    scanf("%d", &n);
    while (n >=0 ){
        printf("%d\n", n);
        //n = n-1;
        n--;
    }
    return 0;
}
