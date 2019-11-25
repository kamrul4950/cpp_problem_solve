#include<bits/stdc++.h>
#include<stdio.h>
#include<string.h>

		 int a,b,c,n,i,t,test;
		 char m[100];

using namespace std;

	
	int main()
	
			{
				scanf("%d",&test);
				for(t=1;t<=test;t++)
				{
						a=0;
						b=1;
						scanf("%d",&n);
						
						for(i=1;i<=n;i++)
						
						{
							if(n==i)
							printf("%d \n",a);
							c=a+b;
							a=b;
							b=c;
							
						}
			
				}
				return 0;
			}
