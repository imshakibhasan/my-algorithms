#include<stdio.h>
int main() {
    int i, x, position, flag = 0;
    int arr[6] = {5, 10, 12, 9, 15, 8};
    printf("Enter a number---");
    scanf("%d", &x);
    for (i = 0; i < 6; i++) {
        if (arr[i] == x) {
            position = i;
            flag++;
            break;
        }
    }
    if(flag > 0) {
        printf("The Searching element is present in the array and its position is : %d", position);
    }
    else {
        printf("The Searching elements is not in the array");
    }
    return 0;
}