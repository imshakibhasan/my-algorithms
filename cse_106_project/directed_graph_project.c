/**
 * @file directed_graph_project.c
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2022-09-05
 * 
 * @copyright Copyright (c) 2022
 * 
 */
/*
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>
int a[5000][5000];
int main() {
	int n;
	int in_deg=0, out_deg=0;
	printf("Number of vertices: ");
	scanf("%d", &n);

	int i,j,m;
	clock_t start_clock, end_clock;

	double computational_time;

	for(i=1;i<n;i++)
    {
		for(j=1;j<n;j++)
		{
			a[i][j]=0;
		}
	}
	for(i=1;i<n;i++)
	{
		for(j=1;j<n;j++)
		{
			if (i==j)
			{
				a[i][j]=0;
			}
			else
			{
				m = rand() % 2;
				if(m==1)
				{
					if(a[i][j]==0)
					{
						a[i][j]=1;
						a[j][i]=1;
					}
				}

            }

		}
	}

    start_clock = clock();
	for (i = 1; i <= n ; i++ ) {
	    for ( j = 1 ; j <= n ; j++ ) {
            if ( a[j][i] == 1 ){
                in_deg++;
            }
	    }
        for ( j = 1 ; j <= n ; j++ )
            if (a[i][j] == 1 )
            out_deg++;
    }
        end_clock = clock();

	    for(i=0;i<n;i++) {
		    for(j=0;j<n;j++) {
			    printf("%d ",a[i][j]);

		        if(j==(n-1)) {
			        printf("\n");
		        }
		    }
	    }

	printf("In Degree: %d \nOut Degree: %d", in_deg, out_deg);

	computational_time = ((double)end_clock - start_clock) ;
	computational_time = computational_time*1000;

    printf("\nComputational time: %f milliseconds", computational_time);

	return 0;
}
*/
#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#include<math.h>
int a[5001][5001];
int main() {
    int i,j,n,indegree=0,outdegree=0;
    double total_time;
    clock_t start,end;
    printf( "How Many Vertices:");
    scanf("%d",&n);
    srand(time(0));
    start=clock();
    for(i=0; i<n; i++) {
        for(j=0; j<n; j++) {
            a[i][j] = rand()%2;
        }
    }
    for(i=0; i<n; i++) {
        for(j=0; j<n; j++) {
            if(a[i][j]==1) {
                outdegree++;
            }
            if(a[j][i]==1) {
                indegree++;
            }
        }
    }
    end=clock();
    printf("\n The total in-Degree is: %d\n",indegree);
    printf("\n The total Out-Degree is: %d\n",outdegree);
    printf("\n The sum of in-degrees and sum of out-degrees are equal");
    total_time=((double)(end-start)/CLOCKS_PER_SEC)*pow(10,3);
    printf("\n Computational time is: %1f ms \n",total_time);
    printf("\n");
    return 0;
}