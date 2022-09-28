#include<stdio.h>
#include<stdlib.h>
int main() {
    int n, i, difference = 1000, diff, k, l;
    scanf("%d", &n);
    int arr[n];
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < n; i++) {
        if (i == 0) {
            diff = abs(arr[n-1] - arr[0]);
            if (diff < difference) {
                difference = diff;
                k = i;
                l = n-1;
            }
        }
        diff = abs(arr[i] - arr[i+1]);
        if (diff < difference) {
            k = i; 
            l = i +1;
        }
    }
    printf("%d %d", k+1, l+1);
    return 0;
}