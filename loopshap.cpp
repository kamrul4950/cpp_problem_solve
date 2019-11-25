#include<bits/stdc++.h>
#include<stdio.h>
#include<string.h>
using namespace std;

	int main()
			{
				//~ int i,j,n;
				//~ scanf("%d",&n);
				//~ for(i=1;i<=n;i++)
				//~ {
					//~ for(j=1;j<=i;j++)
					//~ {
						//~ printf("*");
					//~ }
					//~ printf("\n");
				//~ }
			
		int test,t,i,n,sum,a;
			scanf("%d",&test);
			for(t=1;t<=test;t++)
				{
					scanf("%d",&n);
					sum=0;
					for(i=1;i<=n;i++)
					{
						scanf("%d",&a);
						sum=sum+a;
						
					}
					printf("Case %d: %d\n",t,sum);
					
				}
					
				
			
				
				return 0;
			}
