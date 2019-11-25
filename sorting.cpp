#include<bits/stdc++.h>
#include<stdio.h>
#include<string.h>

using namespace std;

	int main()
		{
			int i,j,a,n,total[30];
			printf("Enter the number of N:");
			scanf("%d",&n);
			printf("Enter the number");
			for(i=0;i<n;i++)
			scanf("%d",&total[i]);
			for(i=0;i<n;i++)
			{
				for(j=i+1;j<n;j++)
				{
					if(total[i]>total[j])
					{
						a=total[i];
						total[i]=total[j];
						total[j]=a;
					}
					
				}
				
			}
			printf("the result is:\n");
			for(i=0;i<n;i++)
			printf("%d\n",total[i]);
			
			return 0;
		}
