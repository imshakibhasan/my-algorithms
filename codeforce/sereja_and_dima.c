/**
 * @file sereja_and_dima.c
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2022-09-28
 * 
 * @copyright Copyright (c) 2022
 * problem : https://codeforces.com/problemset/problem/381/A
 */
#include<stdio.h>
int main() {
    int i, j, n, sereja = 0, dima = 0, temp;
    scanf("%d", &n);
    int arr[n];
    for (i = 0; i <n; i++) {
        scanf("%d", &arr[i]);
    }
    for ()
    printf("\n");
    for (i = 0; i < n; i++) {
        if(i%2 == 0) {

            sereja = sereja + arr[i];
        }
        else {
            dima = dima + arr[i];
        }
    }
    printf("%d %d", sereja, dima);
    return 0;
}
//42
//15 29 37 22 16 5 26 31 6 32 19 3 45 36 33 14 25 20 48 7 42 11 24 28 9 18 8 21 47 17 38 40 44 4 35 1 43 39 41 27 12 13
/*

    for (i = 0; i < n-1; i++) {
        for (j = 0; j < (n-i-1); j++) {
            if (arr[j] < arr[j+1]) {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    */
   /*
   #include<stdio.h>
   int main() {
    ll n,i;
    while(cin>>n)
    {
        ll a[n+2];
        for(i=1;i<=n;i++)
            cin>>a[i];
        ll left=1,right=n,sum1=0,sum2=0;
        i=1;
        while(left<=right)
        {
            if(i%2==1)
            {
                if(a[left]>=a[right])
                    sum1+=a[left++];
                else
                    sum1+=a[right--];
            }
            else
            {
                if(a[left]>=a[right])
                    sum2+=a[left++];
                else
                    sum2+=a[right--];
            }
            i++;
        }
        printf("%d %d", sum1, sum2);
    }
    return 0;
}

*/