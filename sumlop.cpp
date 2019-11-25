#include<bits/stdc++.h>
#include<stdio.h>
#include<string.h>

using namespace std;

		int main()
				{
					int n,m,sum;
					sum=0;
					scanf("%d",&m);
					for(n=1;n<=m;n++)
					sum=sum+n;
					printf("%d",sum);
					int a;
					scanf("%d",&m);
					for(a=m;a>=1;a--)
					printf("%d\n",a);
					//~ 
					//~ int a,b;
					//~ for(a=0,b=100;a<=100;a++,b++)
					//~ printf("a = %d b =%d \n",a,b);
					
					return 0;
				}
