#include<bits/stdc++.h>
#include<stdio.h>
#include<string.h>
using namespace std;

		int a,b,c,test,n,m,i;
		
		int main()
				{
					scanf("%d",&m);
					for(i=1;i<=m;i++)
					{
							
							scanf("%d",&n);
							a=0;
							b=1;
							for(test=1;test<=n;test++)
							{
								if(test==n)
								
								printf("%d \n",a);
								c=a+b;
								a=b;
								b=c;
						
							}
							
					}
					return 0;
				}
