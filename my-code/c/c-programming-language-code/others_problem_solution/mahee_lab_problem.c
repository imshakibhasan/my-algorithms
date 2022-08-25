/*#include<stdio.h>
int main() {
    int i, a[7]={1,2,3,4,5,6,7};
    for ( i=0; i<7; i++ ) {
        if ( a[i]%2==1 ) {
            printf("%d", a[i]);
        }
    }
    return 0;
}*/

/*
#include<stdio.h>
int main() {
    int i, number, last_element; 
    printf("\nPlease Enter Number: ");
    scanf("%d", &number);
    int arr[100];
    i=0;
    while( number>0 ) {

        last_element = number%10;
        number = number/10;
        //printf("%d", last_element);

        if ( last_element%2==1 ) {

            for ( i; i<100; ) {

                arr[i]=last_element;
                break;
            }

            i++;
        }
        
    }

    int length;
    length = i;
    //printf("%d", length);

    for ( i=length-1; i>=0; i-- ) {

       printf("%d", arr[i]);

    }
    return 0;
}
*/


#include <stdio.h>
int main()
{
	int n,rem,reverse=1;
	scanf("%d",&n);
	while(n!=0)
	{
		rem=n%10;
		reverse=reverse*10+rem;
		n/=10;
	}
    //printf("%d", reverse);
	int x,y;
	while(reverse!=0)
	{
		x=reverse%10;
		if(x%2!=0)
		{
			printf("%d",x);
		}
		reverse/=10;
	}
	

}
