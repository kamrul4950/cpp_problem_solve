#include<bits/stdc++.h>
#include<stdio.h>
#include<string.h>
using namespace std;

	int a,c,t,test,fact,n;
	
	int main()
			{
				
				scanf("%d",&test);
				for(t=1;t<=test;t++)
				{
					fact=1;
					scanf("%d",&n);
					
					for(a=1;a<=n;a++)
					{
						
						fact=fact*a;
						
					}
					printf("%d \n",fact);
				}
				
				
				return 0;
			}
