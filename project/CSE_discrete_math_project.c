/**
 * @file CSE_discrete_math_project.c
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2022-08-25
 * 
 * @copyright Copyright (c) 2022
 * project
 * 
 */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int a[10000][10000];

int main()
{

    int i,j,k,n,ou=0,inn=0,s_in=0,s_o=0;
    while(1)
    {
    srand(time(NULL));
    printf("\nHow many vertices ? : ");
    scanf("%d",&n);
    for( i=1; i<=n; i++)
    {
        for( j=1; j<=n; j++)
        {
            k=rand() % 2;
            a[i][j]=k ;
        }
    }
   printf("\n\t HERE IS %d * %d adjancy matrix:\n",n,n);
    for( i=1; i<=n; i++)
    {
        for( j=1; j<=n; j++)
        {
           printf("%d  ",a[i][j]);
        }
        printf("\n");
    }
    int start = clock() ;

     for(i=1; i<=n; i++)
    {   ou=0;
        inn=0;
        for(j=1; j<=n; j++)
        {
            if ( a[i][j] == 1 )
                { ou++;}
            if ( a[j][i] == 1 )
                {inn++;}
        }
        s_in=s_in+inn;
        s_o=s_o+ou;
        printf("\nOut degree of%d (deg+(%d)) = %d \n",i,i,ou);
        printf("In degree of %d (deg-(%d)) = %d \n",i,i,inn);
    }
    if(s_in==s_o)
    {
        printf("\nSum of in-degrees and out-degrees are equal ( Showed )\n" );
    }
    else
        printf("\nSum of in-degrees and out-degrees are not equal.\n" );

    int end= clock();

    double result=( (double)(end-start) );

    printf("\nvertices                : %d\n",n);
    printf("Sumation of in-Degrees  : %d\n" ,s_in);
    printf("Sumation of Out-Degrees : %d\n" , s_o);
    printf("Computational time      : %f nano sec\n",result*1000000000);

}
}