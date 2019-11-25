#include<bits/stdc++.h>
#include<stdio.h>
#include<string.h>

using namespace std;

 
	int main()
	{
		int i,j,n;
		printf("Enter the Number:");
		scanf("%d",&n);
		for(i=2;i<=n;i++)
		{
			for(j=2;j<=i;j++)
			{
				if(i%j==0)
				{
					break;
				}
			}
			if(i==j)
			{
				printf("The prime number is :%d \n",i);
			}
		}
		
		return 0;
	}
