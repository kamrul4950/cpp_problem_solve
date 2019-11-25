#include<bits/stdc++.h>
#include<stdio.h>
#include<string.h>

using namespace std;

int m,n,a,b,first[100][100],second[100][100],sum[100][100];

	int main()
			{
				printf("Enter the row and colamn:\n");
				scanf("%d %d",&m,&n);
				printf("%d * %d Matrix",m,n);
				printf("\nEnter the first matrix value:\n");
				
				for(a=0;a<m;a++)
					for(b=0;b<n;b++)
					scanf("%d",&first[a][b]);
					
				printf("\nEnter the second matrix value:\n");
				
					for(a=0;a<m;a++)
						for(b=0;b<n;b++)
						scanf("%d",&second[a][b]);
						
				printf("The sum of matrix value:\n");
					
					for(a=0;a<m;a++)
					{
						for(b=0;b<n;b++)
						{
							sum[a][b]=first[a][b]+second[a][b];
							printf("%d\t",sum[a][b]);
						}
						printf("\n");
					}
					
				
				return 0;
			}
